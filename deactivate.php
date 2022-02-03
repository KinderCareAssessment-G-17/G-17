<?php

//session_start();

$connection= mysqli_connect('127.0.0.1', 'root', '123@peter', 'kindercare');

if(isset($_POST['deactivate']))
{
  $pupil_to_deactivate= $_POST['pupil_to_deactivate'];
   $query= "UPDATE pupildetails SET ActivationStatus='Deactivated' WHERE UserCode='$pupil_to_deactivate' ";
   $query_run= mysqli_query($connection, $query);

   if($query_run){
       $_SESSION['status']= "Deactivation successful";
       //header("Location: teacherdash.php");
   }
   else{
    $_SESSION['status']= "Deactivation unsuccessful";
    //header("Location: teacherdash.php");
   }
}

?>

Deactivate Pupil:
<section>
<form action="deactivate.php" method="POST">
  <label>Enter User Code :</label><br>
  <input type="text" name="pupil_to_deactivate"/>
  <input type="submit" name="deactivate" value="DEACTIVATE PUPIL"/> 
  </section>