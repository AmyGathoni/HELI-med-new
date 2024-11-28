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

// Check if an ID is provided via GET
if ($_SERVER["REQUEST_METHOD"] == "GET" && isset($_GET["id"])) {
    // Include database connection
    include("../connection.php");

    // Sanitize the input to prevent SQL injection
    $id = intval($_GET["id"]);

    // Fetch the doctor's email using the provided ID
    $stmt = $database->prepare("SELECT docemail FROM doctor WHERE docid = ?");
    $stmt->bind_param("i", $id);
    $stmt->execute();
    $result = $stmt->get_result();

    if ($result->num_rows > 0) {
        $doctor = $result->fetch_assoc();
        $email = $doctor["docemail"];

        // Begin transaction to ensure both deletions succeed
        $database->begin_transaction();

        try {
            // Delete the doctor record
            $stmt = $database->prepare("DELETE FROM doctor WHERE docemail = ?");
            $stmt->bind_param("s", $email);
            $stmt->execute();

            // Delete the associated webuser record
            $stmt = $database->prepare("DELETE FROM webuser WHERE email = ?");
            $stmt->bind_param("s", $email);
            $stmt->execute();

            // Commit the transaction
            $database->commit();

            // Redirect to the doctors page
            header("Location: doctors.php?message=doctor-deleted");
            exit();
        } catch (Exception $e) {
            // Rollback the transaction on error
            $database->rollback();
            header("Location: doctors.php?error=deletion-failed");
            exit();
        }
    } else {
        // If no doctor is found with the given ID
        header("Location: doctors.php?error=doctor-not-found");
        exit();
    }
} else {
    // Redirect if accessed without a valid GET request
    header("Location: doctors.php?error=invalid-request");
    exit();
}
?>
