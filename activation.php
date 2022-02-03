<?php
//session_start();

$connection= mysqli_connect('127.0.0.1', 'root', '123@peter', 'kindercare');

if(isset($_POST['activate']))
{
    $pupil_to_activate= $_POST['pupil_to_activate'];
    $query= "UPDATE pupildetails SET ActivationStatus='Activated' WHERE Usercode='$pupil_to_activate' ";
    $query1= "DELETE FROM activationRequests WHERE UserCode='$pupil_to_activate'";
    $query_run= mysqli_query($connection, $query);
    $query_run= mysqli_query($connection, $query1);

   if($query_run){
       $_SESSION['status']= "Deactivation successful";
        echo('');
      //header("Location: teacherdash.php");
   }
   else{
    $_SESSION['status']= "Deactivation unsuccessful";
            echo('');
//    header("Location: teacherdash.php");
   }
}

?>
Activate Pupil:
<section>
<form action="#" method="POST">
  <label>Enter User Code :</label><br>
  <input type="text" name="pupil_to_activate"/>
  <input type="submit" name="activate" value="RE-ACTIVATE PUPIL"/> 
  </section>