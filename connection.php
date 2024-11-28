<?php

    $database= new mysqli("localhost","root","","heli_med");
    if ($database->connect_error){
        die("Connection failed:  ".$database->connect_error);
    }

?>