<?php 
$Name= $_POST['pupilName'];
$pupilUserCode= $_POST['userCode'];
$pupilStatus= $_POST['activationStatus'];

$con=new mysqli('localhost', 'root', '', 'pupilregistration');
if (!$con){
    echo "Problem connecting the database.";
}

$qry="INSERT INTO `pupilregistration`(`Name`, `pupilUserCode`, `pupilStatus`) VALUES('$Name', '$pupilUserCode', $pupilStatus)";

if($con->query($qry)===TRUE){
    echo "Data inserted";
}
else{
    echo "Problem while inserting data";
}

?>

