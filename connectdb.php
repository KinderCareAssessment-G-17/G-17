<?php
$servername="127.0.0.1";
$username="root";
$password="123@peter";
$databasename="kindercare";
$dbc=mysqli_connect($servername,$username,$password,"$databasename");

if(!$dbc){
    die("could not connect to database:".mysql_error());
}
else{
   echo "";
}
?>