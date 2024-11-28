<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="../css/animations.css">  
    <link rel="stylesheet" href="../css/main.css">  
    <link rel="stylesheet" href="../css/admin.css">
    <title>Sessions</title>
    <style>
        .popup {
            animation: transitionIn-Y-bottom 0.5s;
        }
        .sub-table {
            animation: transitionIn-Y-bottom 0.5s;
        }
    </style>
</head>
<body>
<?php
session_start();
if (isset($_SESSION["user"])) {
    if ($_SESSION["user"] == "" || $_SESSION['usertype'] != 'p') {
        header("location: ../login.php");
        exit();
    } else {
        $useremail = $_SESSION["user"];
    }
} else {
    header("location: ../login.php");
    exit();
}

// Import database
include("../connection.php");

// Fetch user details
$sqlmain = "SELECT * FROM patient WHERE pemail = ?";
$stmt = $database->prepare($sqlmain);
$stmt->bind_param("s", $useremail);
$stmt->execute();
$result = $stmt->get_result();
if ($result->num_rows == 0) {
    die("Error: User not found.");
}
$userfetch = $result->fetch_assoc();
$userid = $userfetch["pid"];
$username = $userfetch["pname"];

date_default_timezone_set('Africa/Nairobi');
$today = date('Y-m-d');
?>
<div class="container">
    <div class="menu">
        <!-- Sidebar Menu Code -->
    </div>
    <div class="dash-body">
        <table border="0" width="100%" style="margin-top:25px;">
            <tr>
                <td width="13%">
                    <a href="index.php"><button class="login-btn btn-primary-soft btn btn-icon-back" style="width:125px; background-color:blueviolet;">Back</button></a>
                </td>
                <td>
                    <form action="schedule.php" method="post" class="header-search">
                        <input type="search" name="search" class="input-text header-searchbar" placeholder="Search Doctor name or Email or Date (YYYY-MM-DD)" list="doctors">
                        <?php
                        // Generate doctor and session title options
                        echo '<datalist id="doctors">';
                        $list11 = $database->query("SELECT DISTINCT docname FROM doctor");
                        $list12 = $database->query("SELECT DISTINCT title FROM schedule");
                        while ($row = $list11->fetch_assoc()) {
                            echo "<option value='{$row["docname"]}'>";
                        }
                        while ($row = $list12->fetch_assoc()) {
                            echo "<option value='{$row["title"]}'>";
                        }
                        echo '</datalist>';
                        ?>
                        <input type="submit" value="Search" class="login-btn btn-primary btn">
                    </form>
                </td>
                <td width="15%">
                    <p style="font-size: 14px;color: rgb(119, 119, 119);">Today's Date</p>
                    <p class="heading-sub12"><?php echo $today; ?></p>
                </td>
            </tr>
            <tr>
                <td colspan="4">
                    <center>
                        <div class="abc scroll">
                            <table width="100%" class="sub-table scrolldown">
                                <tbody>
                                <?php
                                if ($_GET) {
                                    if (isset($_GET["id"]) && is_numeric($_GET["id"])) {
                                        $id = $_GET["id"];
                                        $sqlmain = "SELECT * FROM schedule 
                                                    INNER JOIN doctor ON schedule.docid = doctor.docid 
                                                    WHERE schedule.scheduleid = ? 
                                                    ORDER BY schedule.scheduledate DESC";
                                        $stmt = $database->prepare($sqlmain);
                                        $stmt->bind_param("i", $id);
                                        $stmt->execute();
                                        $result = $stmt->get_result();
                                        
                                        if ($result->num_rows > 0) {
                                            $row = $result->fetch_assoc();
                                            $scheduleid = $row["scheduleid"];
                                            $title = $row["title"];
                                            $docname = $row["docname"];
                                            $docemail = $row["docemail"];
                                            $scheduledate = $row["scheduledate"];
                                            $scheduletime = $row["scheduletime"];
                                            $sql2 = "SELECT * FROM appointment WHERE scheduleid = ?";
                                            $stmt = $database->prepare($sql2);
                                            $stmt->bind_param("i", $id);
                                            $stmt->execute();
                                            $result12 = $stmt->get_result();
                                            $apponum = ($result12->num_rows) + 1;

                                            echo "
                                                <form action='booking-complete.php' method='post'>
                                                    <input type='hidden' name='scheduleid' value='$scheduleid'>
                                                    <input type='hidden' name='apponum' value='$apponum'>
                                                    <input type='hidden' name='date' value='$today'>
                                                    <td style='width: 50%;' rowspan='2'>
                                                        <div class='dashboard-items search-items'>
                                                            <div>
                                                                <p>Session Details</p>
                                                                <p>Doctor Name: <b>$docname</b></p>
                                                                <p>Session Title: $title</p>
                                                                <p>Session Date: $scheduledate</p>
                                                                <p>Starts: $scheduletime</p>
                                                                <p>Fee: <b>LKR 2000.00</b></p>
                                                            </div>
                                                        </div>
                                                    </td>
                                                    <td>
                                                        <input type='submit' class='login-btn btn-primary btn btn-book' value='Book now' name='booknow'>
                                                    </td>
                                                </form>
                                            ";
                                        } else {
                                            echo "<tr><td colspan='4'>No session found for the given ID.</td></tr>";
                                        }
                                    } else {
                                        echo "<tr><td colspan='4'>Invalid session ID.</td></tr>";
                                    }
                                } else {
                                    echo "<tr><td colspan='4'>No session selected.</td></tr>";
                                }
                                ?>
                                </tbody>
                            </table>
                        </div>
                    </center>
                </td>
            </tr>
        </table>
    </div>
</div>
</body>
</html>
