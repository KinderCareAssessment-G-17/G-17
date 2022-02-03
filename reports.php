<?php 
include"database.php";
$qry1="SELECT * FROM assignment;";
$qry2=mysqli_query($connect,$qry1);
$qry3="SELECT count(mark.AssignmentNumber) FROM mark INNER JOIN assignment ON mark.AssignmentNuber = assignment.AssigmentNumber;";
$attempt=(int)mysqli_query($connect,$qry3);

?>




<!DOCTYPE html>
<html>
<head>
<title>upload assignment</title>
<link rel="stylesheet" type="text/css" href=""/>


</head>

<body style= "text-align:center;">


 
<?php
if(isset($_SESSION['status']))
{
    echo "<h5>".$_SESSION['status']."</h5>";
    unset($_SESSION['status']);
}
?>
<div>
<table>
    <thead>
        <b>REPORTS</b>
    </thead>
    <tr>
        <th>ASSIGNMENT NUMBER</th>
        <th>CHARACTERS GIVEN</th>
        <th>TIME </th>
        <th>COMMENT </th>
    </tr>

    </tr>
</table>

</div>
</body>
</html>
