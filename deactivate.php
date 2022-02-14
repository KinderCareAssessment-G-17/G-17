<?php
include_once 'connectdb.php';
/*session_start();

if(isset($_POST['change']))
{	 
		$userCode = $_POST["UserCode"];
            $sql = "UPDATE pupildetails set ActivationStatus = 'Deactivated' where userCode ='$userCode'";
	
            if (mysqli_query($dbc, $sql)) {
                $_SESSION['changeStatus']="Pupil deactivated successfully";
                header("Location:teacherdash.php"); 
    
            }
            else {
                $_SESSION['changeStatus']="Failed to deactivate pupil.";
                header("Location:teacherdash.php"); 
            }
            mysqli_close($dbc);
}*/

if(isset($_GET['UserCode'])){
    $UserCode = $_GET['UserCode'];
    
    $sql = "UPDATE pupildetails SET ActivationStatus ='Deactivated', requestactivation=NULL WHERE UserCode='$UserCode'";

    mysqli_query($dbc,$sql);

}

header('location: teacherdash.php');
?>
