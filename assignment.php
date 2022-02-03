<?php 

if(isset($_POST['upload'])){
$assNo= $_POST['AssignmentNumber'];
$char= $_POST['NumberOfChar'];
$given=$_POST['GivenChar'];
$start= $_POST['Start'];
$end= $_POST['End'];

$connect=new mysqli('localhost', 'root', '', 'kindercare');
if (!$connect){
    echo "Problem connecting the database.";
}

$qry1="INSERT INTO assignment (AssignmentNumber,NumberOfChar,GivenChar,Starttime,Endtime) VALUES('$assNo', '$char', 
'$given', '$start', '$end')";
if(mysqli_query($connect, $qry1)){
    header("location:teacherdash.php");
}else{
    echo "Problem while inserting data";
}

}

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



<form action="assignment.php" method="POST">
<img src="logo.png" width="90" height="90" class="logo1">
<h2 class="header" >KINDERCARE<br> <h2>ASSIGNMENTS UPLOAD PAGE:</h2></h2>
<fieldset style="background-color:plum">
<p>Assignments upload:</p>
<br/><br/><b><label>Assignment number</label></b><br>
<input type="text" name="AssignmentNumber" maxlength="20" style="margin-bottom:10px;"/><br>

<b><label>Number of Characters</label><br></b>
<input type="text" name="NumberOfChar" maxlength="20" style="margin-bottom:10px;"/><br>

<b><label>Given Characters</label><br></b>
<input type="text" name="GivenChar" maxlength="20"style="margin-bottom:10px;"/><br>

<b><label>Start Time</label><br></b>
<input type="datetime-local" name="Start" maxlength="20"style="margin-bottom:10px;"/><br>

<b><label>End Time</label><br></b>
<input type="datetime-local" name="End" maxlength="20" style="margin-bottom:10px;"/><br>


<button type="submit" name="upload">UPLOAD</button><br><br>
</fieldset>
</form>
<br><br>

</body>
</html>
