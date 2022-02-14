<?php
include ('connectdb.php');


if (isset($_POST['login']))
{
    $teacherID = mysqli_real_escape_string($dbc, $_POST['teacher_ID']);
    $upwd = mysqli_real_escape_string($dbc, $_POST['password']);
    $result = mysqli_query($dbc, "SELECT * FROM teacher WHERE teacher_ID = '" . $teacherID. "' and pass = '" . SHA1('$upwd') . "'");
    
    header("location: teacherdash.php");
    /*if (mysqli_num_rows($result) > 0)
    {
      
        
        $row = mysqli_fetch_array($result);

        session_start();
        $_SESSION['teacher_ID'] = $row['teacher_ID'];
        $_SESSION['first_name'] = $row['first_name'];
        $_SESSION['last_name'] = $row['last_name'];
        
        header("Location: teacherdash.php");
    }
    else
    {
        // login failed
        header("Location: login.php?err=true");
    }*/
}
?>