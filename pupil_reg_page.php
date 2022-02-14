<?php
if(isset($_SESSION['status']))
{
    echo "<h5>".$_SESSION['status']."</h5>";
    unset($_SESSION['status']);
}
?>
<html>
   <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
    <meta http-equiv="x-ua-compatible" content="ie=edge" />
    <title> Pupil registration page</title> 
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.11.2/css/all.css" />
    <!-- Google Fonts Roboto -->
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Roboto:wght@300;400;500;700&display=swap" />
    <!-- MDB -->
    <link rel="stylesheet" href="css/mdb.min.css" />
    <!-- Custom styles -->
    <link rel="stylesheet" href="teacherdash.css" />
    </head>
    <body>
    <section class="vh-100 " >
  <div class=" d-flex align-items-center h-100 gradient-custom-3">
    <div class="container h-100">
      <div class="row d-flex justify-content-center align-items-center h-100">
        <div>
          <div class="card" style="border-radius: 15px;">
            <div class="card-body p-5">
              <h2 class="text-uppercase text-center mb-5">Pupil Registration Form</h2>

              <form action="pupilRegistrationp.php" method="POST">
           
                <div class="form-outline mb-4">
                  <input type="text" id="form3Example1cg" name="pupilfName" maxlength="20" class="form-control form-control-lg" />
                  <label class="form-label" for="form3Example1cg">First name</label>
                </div>

                <div class="form-outline mb-4">
                  <input type="text" id="form3Example1cg" name="pupillName" maxlength="20" class="form-control form-control-lg" />
                  <label class="form-label" for="form3Example1cg">Last name</label>
                </div>

                <div class="form-outline mb-4">
                  <input type="text" id="form3Example1cg" name="ptelNo" maxlength="20" class="form-control form-control-lg" />
                  <label class="form-label" for="form3Example1cg">Telephone number</label>
                </div>

                <!--<div class="form-outline mb-4">
                  <input type="email" id="form3Example3cg" name="emailAddress" maxlength="20" class="form-control form-control-lg" />
                  <label class="form-label" for="form3Example3cg">Email Address</label>
                </div>-->

                <div class="form-outline mb-4">
                  <input type="text" id="form3Example4cg" name="userCode" maxlength="20" class="form-control form-control-lg" />
                  <label class="form-label" for="form3Example4cg">User Code</label>
                </div>
              

                <div class="d-flex justify-content-center">
                  <button type="submit" name="register" class="btn btn-success btn-block btn-lg gradient-custom-4 text-body">Register</button>
                </div>


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