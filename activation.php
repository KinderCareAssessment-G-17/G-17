<?php

session_start();
$connection= mysqli_connect('localhost', 'root', '', 'kindercare');

if(isset($_POST['activate']))
{
   $regNo= $_POST['pupil_to_activate'];
   $query= "UPDATE pupildetails SET ActivationStatus='Activated' WHERE UserCode='$userCode' ";
   $query_run= mysqli_query($connection, $query);

   if($query_run){
       $_SESSION['status']= "Deactivation successful";
       header("Location: teacherdash.php");
   }
   else{
    $_SESSION['status']= "Deactivation unsuccessful";
    header("Location: teacherdash.php");
   }
}

?>

Activate Pupil:
<section>
<form action="activation.php" method="POST">
  <label>Enter User Code :</label><br>
  <input type="text" name="pupil_to_activate"/>
  <input type="submit" name="activate" value="RE-ACTIVATE PUPIL"/> 
  </section>