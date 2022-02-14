<?php 
$fName= $_POST['pupilfName'];
$lName= $_POST['pupillName'];
$TelNo=$_POST['ptelNo'];
$pupilUserCode= $_POST['userCode'];
//$emailAddress= $_POST['emailAddress'];

$con=new mysqli('localhost', 'root', '', 'kindercare');
if (!$con){
    echo "Problem connecting the database.";
}

$qry="INSERT INTO pupilDetails(firstName, lastName, UserCode, TelNo, ActivationStatus) VALUES('$fName', '$lName', '$pupilUserCode', '$TelNo', 'Activated')";

if($con->query($qry)===TRUE){
    echo"<script>alert('Pupil registered successfully!')</script>";
    header("location:teacherdash.php");
}
else{
    echo "Problem while inserting data";
}

?>
