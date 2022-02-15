<?php
session_start();
include_once('connectdb.php');


if (isset($_POST['login']))
{

    $teacherID = mysqli_real_escape_string($dbc, $_POST['teacher_ID']);
    $upwd = mysqli_real_escape_string($dbc, $_POST['password']);
    $result = mysqli_query($dbc, "SELECT count(*) as count FROM teacher WHERE teacher_ID = '" . $teacherID. "' and pass = '".$upwd."' ");
   
    $row = mysqli_fetch_array($result);
    echo "$upwd ";
    $number=$row['count'];
    echo "$number ";
    if ($number > 0)
    {
      
        
     echo"hi";

        $_SESSION['teacher_ID'] = $teacherID;
       
        
        
        header("location: teacherdash.php");
        exit();
    }
    else
    {
        // login failed
      
            echo "<script>alert('Login failed! Invalid ID or password!')</script>"; 
           
        
    }
}
?>