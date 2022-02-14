<?php

function load($page = 'loginpage.php')
{
    $url = 'http://' . $_SERVER['HTTP_HOST'] . dirname($_SERVER['PHP_SELF']);
    $url = rtrim($url, '/\\');
    $url .= '/' . $page;
    header("Location:$url");
    exit();
}

function validate($dbc, $teacher_ID = '', $pwd = '')
{
    $errors = array();
    if (empty( $teacher_ID))
    { $errors[] = 'Enter your teacher_ID.';}
    else
    { $s = mysqli_real_escape_string( $dbc, trim( $teacher_ID));}

    if (empty( $pwd ))
    { $errors[] = 'Enter your password.';}
    else
    { $p = mysqli_real_escape_string( $dbc, trim( $pwd));}

    if(empty($errors))
    {
        $q = "SELECT *
        FROM teacher
        WHERE teacher_ID = '$s'
        AND pass = SHA1('$p')";

        $r = mysqli_query ($dbc, $q);

        if (mysqli_num_rows($r) == 1)
        {
            $row = mysqli_fetch_assoc ($r);
            return array(true, $row);
        }
        else
        { $errors[] = 'Teacher_ID and password not found.'; }
    }
    return array( false, $errors);
}
?>