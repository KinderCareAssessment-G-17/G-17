<!DOCTYPE html>
<html>
<head>
<title>Pupil Registration</title>
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

<!--<h4>You can register your pupils here</h4><br/>-->



<form action="pupilRegistrationp.php" method="POST">
<img src="logo.png" width="90" height="90" class="logo1">
<h2 class="header" >KINDERCARE<br> <h2>PUPIL REGISTRATION</h2></h2>
<fieldset style="background-color:plum">

<h1>Pupil  details  <br>form:</h1> 

<br/><br/><b><label>First name</label></b><br>
<input type="text" name="pupilfName" maxlength="20" style="margin-bottom:10px;"/><br>

<b><label>Last name</label><br></b>
<input type="text" name="pupillName" maxlength="20" style="margin-bottom:10px;"/><br>

<b><label>Telephone number</label><br></b>
<input type="text" name="ptelNo" maxlength="20"style="margin-bottom:10px;"/><br>

<b><label>Email Address</label><br></b>
<input type="text" name="emailAddress" maxlength="20"style="margin-bottom:10px;"/><br>

<b><label>User Code</label><br></b>
<input type="text" name="userCode" maxlength="20" style="margin-bottom:10px;"/><br>


<button type="submit" name="register">Register</button><br><br>

</fieldset>
</form>
<br><br>
<!--<?php include('deleteMark.php');?>-->

    <script type="JavaScript">
        
    </script>

</body>
</html>
