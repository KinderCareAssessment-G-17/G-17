<?php

session_start();


$connection= mysqli_connect('localhost', 'root', '', 'kindercare');

if(isset($_POST['deactivate']))
{
    $pupil_to_deactivate= $_POST['pupil_to_deactivate'];
    $query= "UPDATE pupildetails SET ActivationStatus='Deactivated' WHERE UserCode='$pupil_to_deactivate' ";
    $query_run= mysqli_query($connection, $query);

   if($query_run){
       $_SESSION['status']= "Deactivation successful";
       header("Location: teacherdash.php");
                }
}
?>
