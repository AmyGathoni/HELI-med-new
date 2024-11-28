<?php
session_start();

if (!isset($_SESSION["user"]) || $_SESSION["user"] == "" || $_SESSION['usertype'] != 'p') {
    header("location: ../login.php");
    exit();
}

// Import database
include("../connection.php");

// Enable error reporting for debugging
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

// Fetch user details
$useremail = $_SESSION["user"];
$sqlmain = "SELECT * FROM patient WHERE pemail = ?";
$stmt = $database->prepare($sqlmain);
if (!$stmt) {
    die("SQL Error (patient fetch): " . $database->error);
}
$stmt->bind_param("s", $useremail);
$stmt->execute();
$userrow = $stmt->get_result();
if ($userrow->num_rows == 0) {
    die("Error: User not found.");
}
$userfetch = $userrow->fetch_assoc();
$userid = $userfetch["pid"];

if ($_POST) {
    if (isset($_POST["booknow"])) {
        $scheduleid = $_POST["scheduleid"];
        $apponum = $_POST["apponum"];
        $date = $_POST["date"];

        // Check if appointment already exists for the user
        $sql = "SELECT * FROM appointment WHERE pid = ? AND scheduleid = ?";
        $stmt = $database->prepare($sql);
        if (!$stmt) {
            die("SQL Error (appointment check): " . $database->error);
        }
        $stmt->bind_param("ii", $userid, $scheduleid);
        $stmt->execute();
        $appointmentExists = $stmt->get_result();
        if ($appointmentExists->num_rows > 0) {
            die("You have already booked this session.");
        }

        // Add appointment
        $sql = "INSERT INTO appointment (pid, apponum, scheduleid, appodate) VALUES (?, ?, ?, ?)";
        $stmt = $database->prepare($sql);
        if (!$stmt) {
            die("SQL Error (appointment insert): " . $database->error);
        }
        $stmt->bind_param("iiis", $userid, $apponum, $scheduleid, $date);
        if ($stmt->execute()) {
            header("location: appointment.php?action=booking-added&id=$apponum&titleget=none");
            exit();
        } else {
            die("Error booking session: " . $stmt->error);
        }
    }
} else {
    die("Invalid request.");
}
?>
