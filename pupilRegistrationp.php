<?php 
$fName= $_POST['pupilfName'];
$lName= $_POST['pupillName'];
$TelNo=$_POST['ptelNo'];
$pupilUserCode= $_POST['userCode'];
$emailAddress= $_POST['emailAddress'];

$con=new mysqli('localhost', 'root', '123@peter', 'kindercare');
if (!$con){
    echo "Problem connecting the database.";
}

$qry="INSERT INTO pupilDetails(firstName, lastName, UserCode, TelNo, ActivationStatus) VALUES('$fName', '$lName', '$pupilUserCode', '$TelNo', 'Activated')";

if($con->query($qry)===TRUE){
    header("location:teacherdash.php");
}
else{
    echo "Problem while inserting data";
}

?>
