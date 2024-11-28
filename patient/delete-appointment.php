<?php
session_start();

// Check if the user is logged in and has the correct user type
if (isset($_SESSION["user"])) {
    if ($_SESSION["user"] == "" || $_SESSION['usertype'] != 'a') {
        header("location: ../login.php");
        exit();
    }
} else {
    header("location: ../login.php");
    exit();
}

// Check if the 'id' parameter is provided
if (isset($_GET["id"])) {
    $id = $_GET["id"]; // Appointment ID from the URL

    // Import database connection
    include("../connection.php");

    // Prepare and execute the DELETE statement
    $sql = "DELETE FROM appointment WHERE appoid = ?";
    $stmt = $database->prepare($sql);

    if ($stmt) {
        $stmt->bind_param("i", $id);
        if ($stmt->execute()) {
            // Appointment deleted successfully
            header("location: appointment.php?action=delete-success");
        } else {
            // Error in deleting the appointment
            header("location: appointment.php?action=delete-failed");
        }
    } else {
        // Error in preparing the statement
        echo "Error preparing the SQL statement.";
    }
} else {
    // Redirect if no 'id' is provided
    header("location: appointment.php?action=invalid-request");
}
?>
