<?php
include_once 'connectdb.php';


if(isset($_GET['UserCode'])){
    $UserCode = $_GET['UserCode'];
    
    $sql = "UPDATE pupildetails SET ActivationStatus ='Activated' , requestactivation='Handled' WHERE UserCode='$UserCode' AND requestactivation ='pending'";

    mysqli_query($dbc,$sql);
}

header('location: teacherdash.php');
?>

