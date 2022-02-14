<?php

if ( $_SERVER['REQUEST_METHOD'] == 'POST')
{
    require('connectdb.php');
    require('login_tools.php');

    list ($check, $data) = validate( $dbc, $_POST['teacher_ID'], $_POST['pass']);

    if ($check)
    {
        session_start();
        $_SESSION['teacher_ID'] = $data['teacher_ID'];
        $_SESSION['first_name'] = $data['first_name'];
        $_SESSION['last_name'] = $data['last_name'];

        load('teacherdash.php');
    } else { $errors = $data;}

    mysqli_close($dbc);
}

include('loginpage.php'); ?>