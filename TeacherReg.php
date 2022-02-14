<?php

$page_title = 'Register';


if ($_SERVER['REQUEST_METHOD'] == 'POST')
{
    require ('connectdb.php');
    $errors = array();

    if (empty($_POST['first_name']))
    { $errors[] = 'Enter your first name.';}
    else
    {$fn = mysqli_real_escape_string($dbc,
        trim($_POST['first_name']));}
    
    if (empty($_POST['last_name']))
    { $errors[] = 'Enter your last name.';}
    else 
    { $ln = mysqli_real_escape_string( $dbc,
        trim( $_POST['last_name']));}

    if (empty($_POST['email']))
    { $errors[] = 'Enter your email address.';}
    else 
    { $e = mysqli_real_escape_string( $dbc,
        trim( $_POST['email']));}
    
    if (empty($_POST['teacher_ID']))
    { $errors[] = 'Enter your teacher_ID.';}
    else {
        $s = mysqli_real_escape_string( $dbc, trim( $_POST['teacher_ID']));
    }


    if (!empty($_POST['pass1']))
    {
        if ( $_POST['pass1'] != $_POST['pass2'])
        { $errors[] = 'Passwords do not match.';}
        else
        { $p = mysqli_real_escape_string( $dbc,
            trim($_POST['pass1']));}
    } else { $errors[] = 'Enter your password.';}

    if ( empty( $errors))
    {
        $q = "SELECT teacher_ID FROM teacher WHERE email='$e'";
        $r = mysqli_query($dbc, $q);
        if ( mysqli_num_rows($r) != 0)
        {
            $errors[] = 'Email address already registered.
            #<a href="login.php">Login</a>';
        }
    }

    if (empty($errors)) 
    {
        $q = "INSERT INTO teacher (first_name, last_name, email, teacher_ID, pass)
              VALUES ('$fn', '$ln', '$e', '$s' ,SHA1('$p'))";
        $r = mysqli_query ($dbc, $q);
        
        if ($r) 
        {
            echo '<script>alert("Registered!")</script>';
          header("location: login.php");
        }
        mysqli_close($dbc);
    
        exit();
    }
    else
    {
        echo '<h1>Error!</h1>
        <p id="err_msg">The following error(s) occurred:<br>';
        foreach ($errors as $msg)
        {
            echo "-$msg<br>"; 
        }
        echo 'Please try again.</p>';
        mysqli_close($dbc);
    }
}?>

<html>
    <head>
        
    <!-- <link rel="stylesheet" href="teacherReg.css"> -->
    <link href="https://unpkg.com/tailwindcss@^2.0/dist/tailwind.min.css" rel="stylesheet">

    
    </head>
    
    <body >
        <style>
            body { background-color:#508bfc;
                background-repeat: no-repeat;
                background-size: 1800px 700px;
            }
            .logo1{
                margin-left:auto;
                margin-right:auto;
            }

            form{ 
                opacity: 0.7;
            }
        </style>
    <div class="flex justify-center">
<div class="w-4/12 bg-white p-6 rounded-lg">
<div>
    <div class="flex justify-center">

<p class="header2" > <img src="logo.png" width="150" height="150" class="logo1"><br> <b>KINDERCARE REGISTRATION FORM<b></p>
</div>
<form action="TeacherReg.php" method="POST" class="justify-center">
        <div class="mb-4  " >
    <label for="firstname" class="sr-only">First Name</label>
   <input type="text"name="first_name" id=" firstname" placeholder="Your First Name" class="border-2 
w-full p-4 rounded-lg border-red-500" value="<?php if (isset( $_POST['first_name']))
    echo $_POST['first_name'];?>">



</div>

<div class="mb-4 ">
    <label for="lastname" class=" block sr-only">Last Name</label>
   <input type="text"name="last_name" id=" lastname" placeholder="Your Last Name" class=" border-2 w-full 
p-4 rounded-lg  border-red-500" value="<?php if (isset( $_POST['last_name'])) echo $_POST['last_name'];?>">



</div>

<div class="mb-4 ">
    <label for="email" class="sr-only">Email</label>
   <input type="email" name="email" id="em" placeholder="Your email" class=" border-2 w-full p-4 
rounded-lg  border-red-500 " value="<?php if (isset( $_POST['email']))
echo $_POST['email'];?>">



</div>

<div class="mb-4 ">
    <label for="username" class=" block sr-only">TeacherID</label>
   <input type="text" name="teacher_ID" id="em" placeholder="Your Teacher ID " class="border-2 w-full p-4 
rounded-lg  border-red-500" value="<?php if (isset($_POST['teacher_ID']))
 echo $_POST['teacher_ID'];?>"> 



</div>


<div class="mb-4 ">
    <label for="password" class="sr-only">Password</label>
   <input type="password" name="pass1" id="password" placeholder="choose a password" class=" border-2 
w-full p-4 rounded-lg  border-red-500" value="<?php if (isset( $_POST['pass1']))
echo $_POST['pass1'];?>">



</div>
<div class="mb-4 ">
    <label for="password" class="sr-only"> Confirm Password </label>
   <input type="password" name="pass2" id="password2" placeholder="Repeat your password" class="border-2 
w-full p-4 rounded-lg border-red-500" value="<?php if (isset( $_POST['pass2']))
 echo $_POST['pass2'];?>"> 



</div>
<div class="flex items-center justify-between">
    <button type="submit" name="button" class="bg-blue-500 hover:bg-blue-700 text-white font-bold py-3 px-4 rounded 
focus:outline-none focus:shadow-outline w-full" type="button">SIGN UP</button>


</div>
<p class="text-center text-muted mt-5 mb-0">Have already an account? <a href="login.php" class="fw-bold text-body"><u>Login here</u></a></p>
 </form>






</div>
</div>
    </div>
    </body>
</html>





































