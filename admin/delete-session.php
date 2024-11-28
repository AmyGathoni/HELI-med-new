<?php
session_start();

// Check if the user is logged in and is an admin
if (isset($_SESSION["user"])) {
    if ($_SESSION["user"] == "" || $_SESSION['usertype'] != 'a') {
        header("Location: admin-login.php");
        exit();
    }
} else {
    header("Location: admin-login.php");
    exit();
}

// Check if the 'id' parameter is provided via GET
if ($_SERVER["REQUEST_METHOD"] == "GET" && isset($_GET["id"])) {
    // Include database connection
    include("../connection.php");

    // Sanitize the input to prevent SQL injection
    $id = intval($_GET["id"]);

    // Check if the session exists
    $stmt = $database->prepare("SELECT * FROM schedule WHERE scheduleid = ?");
    $stmt->bind_param("i", $id);
    $stmt->execute();
    $result = $stmt->get_result();

    if ($result->num_rows > 0) {
        // Delete the session
        $stmt = $database->prepare("DELETE FROM schedule WHERE scheduleid = ?");
        $stmt->bind_param("i", $id);

        if ($stmt->execute()) {
            // Redirect on success
            header("Location: schedule.php?message=session-deleted");
            exit();
        } else {
            // Handle deletion failure
            header("Location: schedule.php?error=deletion-failed");
            exit();
        }
    } else {
        // Redirect if session not found
        header("Location: schedule.php?error=session-not-found");
        exit();
    }
} else {
    // Redirect if accessed without a valid GET request
    header("Location: schedule.php?error=invalid-request");
    exit();
}
?>
