<?php

$page_title = 'Registration page';


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
            $errors[] = 'Email address already registered.';
        }
    }

    if (empty($errors)) 
    {
        $q = "INSERT INTO teacher (first_name, last_name, email, teacher_ID, pass)
              VALUES ('$fn', '$ln', '$e', '$s' ,SHA1('$p'))";
        $r = mysqli_query ($dbc, $q);
        
        if ($r) 
        {
            echo '<h1><script>alert("You are now registered")</script></h1>';
            header("location:loginpage.php");
        }
        mysqli_close($dbc);
    
        exit();
    }
    else
    {
        echo '<h1><script>alert("Error!")</script></h1>
        <p id="err_msg"><script>alert("The following error(s) occurred:")</script><br>';
        foreach ($errors as $msg)
        {
            echo "<script>alert('-$msg')</script><br>"; 
        }
        echo '<script>alert("Please try again.")</script></p>';
        mysqli_close($dbc);
    }
}?>

<html>
    <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
    <meta http-equiv="x-ua-compatible" content="ie=edge" />
    <title>Registration page</title> 
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.11.2/css/all.css" />
    <!-- Google Fonts Roboto -->
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Roboto:wght@300;400;500;700&display=swap" />
    <!-- MDB -->
    <link rel="stylesheet" href="css/mdb.min.css" />
    <!-- Custom styles -->
    <link rel="stylesheet" href="Tr_Reg.css" />
    </head>
    <body>
    <section class="vh-100 bg-image" >
  <div class="mask d-flex align-items-center h-100 gradient-custom-3">
    <div class="container h-100">
      <div class="row d-flex justify-content-center align-items-center h-100">
        <div class="col-12 col-md-9 col-lg-7 col-xl-6">
          <div class="card" style="border-radius: 15px;">
            <div class="card-body p-5">
              <h2 class="text-uppercase text-center mb-5">Create an account</h2>

              <form action="Tr_Reg.php" method="POST">
           
                <div class="form-outline mb-4">
                  <input type="text" id="form3Example1cg" name="first_name" class="form-control form-control-lg" 
                  value="<?php if (isset( $_POST['first_name']))
                  echo $_POST['first_name'];?>"/>
                  <label class="form-label" for="form3Example1cg">First name</label>
                </div>

                <div class="form-outline mb-4">
                  <input type="text" id="form3Example1cg" name="last_name" class="form-control form-control-lg" 
                  value="<?php if (isset( $_POST['last_name']))
                  echo $_POST['last_name'];?>"/>
                  <label class="form-label" for="form3Example1cg">Last name</label>
                </div>

                <div class="form-outline mb-4">
                  <input type="text" id="form3Example1cg" name="teacher_ID" class="form-control form-control-lg" 
                  value="<?php if (isset($_POST['teacher_ID']))
                  echo $_POST['teacher_ID'];?>"/>
                  <label class="form-label" for="form3Example1cg">Teacher_ID</label>
                </div>

                <div class="form-outline mb-4">
                  <input type="email" id="form3Example3cg" name="email" class="form-control form-control-lg" 
                  value="<?php if (isset( $_POST['email']))
                  echo $_POST['email'];?>"/>
                  <label class="form-label" for="form3Example3cg">Your Email</label>
                </div>

                <div class="form-outline mb-4">
                  <input type="password" id="form3Example4cg" name="pass1" class="form-control form-control-lg" 
                  value="<?php if (isset( $_POST['pass1']))
                  echo $_POST['pass1'];?>"/>
                  <label class="form-label" for="form3Example4cg">Password</label>
                </div>

                <div class="form-outline mb-4">
                  <input type="password" id="form3Example4cdg" name="pass2" class="form-control form-control-lg" 
                  value="<?php if (isset( $_POST['pass2']))
                  echo $_POST['pass2'];?>"/>
                  <label class="form-label" for="form3Example4cdg">Repeat your password</label>
                </div>

              

                <div class="d-flex justify-content-center">
                  <button type="submit" name="register" class="btn btn-success btn-block btn-lg gradient-custom-4 text-body">Register</button>
                </div>

                <p class="text-center text-muted mt-5 mb-0">Have already an account? <a href="loginpage.php" class="fw-bold text-body"><u>Login here</u></a></p>

              </form>

            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</section>
  <!-- MDB -->
  <script type="text/javascript" src="js/mdb.min.js"></script>

    </body>
</html>