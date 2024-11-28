<?php
// Import database connection
include("../connection.php");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Fetch form inputs
    $name = $_POST['name'];
    $nic = $_POST['nic'];
    $oldemail = $_POST['oldemail'];
    $spec = $_POST['spec'];
    $email = $_POST['email'];
    $tele = $_POST['Tele'];
    $password = $_POST['password'];
    $cpassword = $_POST['cpassword'];
    $id = intval($_POST['id00']); // Ensure ID is treated as an integer
    
    // Initialize error variable
    $error = '';

    // Check if passwords match
    if ($password !== $cpassword) {
        $error = 'Passwords do not match.';
        header("Location: doctors.php?action=edit&error=password-mismatch&id=$id");
        exit();
    }

    // Check if the new email already exists for a different doctor
    $stmt = $database->prepare("SELECT docid FROM doctor WHERE docemail = ? AND docid != ?");
    $stmt->bind_param("si", $email, $id);
    $stmt->execute();
    $result = $stmt->get_result();

    if ($result->num_rows > 0) {
        // Email already exists for another doctor
        $error = 'Email is already in use by another doctor.';
        header("Location: doctors.php?action=edit&error=email-exists&id=$id");
        exit();
    }

    // Update doctor information
    $stmt = $database->prepare("UPDATE doctor SET docemail = ?, docname = ?, docpassword = ?, docnic = ?, doctel = ?, specialties = ? WHERE docid = ?");
    $stmt->bind_param("ssssisi", $email, $name, $password, $nic, $tele, $spec, $id);

    if ($stmt->execute()) {
        // Update email in the webuser table
        $stmt = $database->prepare("UPDATE webuser SET email = ? WHERE email = ?");
        $stmt->bind_param("ss", $email, $oldemail);

        if ($stmt->execute()) {
            // Success
            header("Location: doctors.php?action=edit&success=1&id=$id");
            exit();
        } else {
            // Error updating webuser email
            $error = 'Failed to update webuser email.';
            header("Location: doctors.php?action=edit&error=update-webuser&id=$id");
            exit();
        }
    } else {
        // Error updating doctor information
        $error = 'Failed to update doctor information.';
        header("Location: doctors.php?action=edit&error=update-failed&id=$id");
        exit();
    }
} else {
    // Redirect if accessed without POST request
    header("Location: doctors.php?action=edit&error=invalid-request");
    exit();
}
?>
