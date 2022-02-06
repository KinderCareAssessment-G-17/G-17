<?php
session_start();

require 'connectdb.php';

if(isset($_POST['activate'])){
       $UserCode=$_POST['UserCode'];
       $sql="UPDATE pupildetails SET ActivationStatus = 'Activated' where UserCode='$UserCode'";
       $query="Delete from activationrequests WHERE UserCode='$UserCode'";

       if(mysqli_query($dbc,$sql)){

           if(mysqli_query($dbc,$query)){
                $_SESSION['status']='Re-activation successful';
                header("location:teacherdash.php");
                    }
                }
                 else{
                 echo('There was a problem.');
     }
}

 ?>