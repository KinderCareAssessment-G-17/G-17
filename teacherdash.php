<?php

?>
<html>
    <head>
        <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.1/css/all.css">
      
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Teacher</title>
        <link rel="stylesheet" href="teacherdash.css">
    </head>
    <body>
        <div class="wrapper">
            <div class="sidebar">
            <!--profile image & text-->
                <div class="profile">
                    <img src="IMG-20200912-WA0012.jpg" alt="profile_picture">
                    <h3>Kyeyune Peter</h3>
                    <p>Teacher</p>
                </div>
            
        
            <!--menu item-->
            <ul>
                <li>
                    <a href="#home" >
                        <span class="icon"><i class="fas fa-home"></i></span>
                        <span class="item">My Home</span>
                    </a>
                </li>
                <li>
                    <a href="#dash">
                        <span class="icon"><i class="fas fa-desktop"></i></span>
                        <span class="item">Register Pupils</span>
                    </a>
                </li>
        
            
                <li>
                    <a href="#assignments">
                        <span class="icon"><i class="fas fa-database"></i></span>
                        <span class="item">Assignments</span>
                    </a>
                </li>
                <li>
                    <a href="#activation">
                        <span class="icon"><i class="fas fa-chart-line"></i></span>
                        <span class="item">Activation Requests</span>
                    </a>
                </li>
           
                <li>
                    <a href="logout.php">
                        <span class="icon"><i class="fas fa-cog"></i></span>
                        <span class="item">Log Out</span>
                    </a>
                </li>
            </ul>

            </div>
            <div class="section">
                <div class="top_navbar">
                    <div class="ham">
                        <a href="#">KINDERCARE</a>
                    </div>
                </div>
            </div>

        </div>
     
        <section id="home" class="section1" >
            <?php include("myhome.php")?>
        </section>
        <section id="dash" class="section2">
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
        </section>
        <section id="assignments" class="section3">
        <?php

        include "connectdb.php";
        //session_start();

        if (isset($_POST['send'])){
        // get values from form
        $question1 = implode("", $_POST["answer1"]);
        $start_date = $_POST["start_date"];
        $end_date = $_POST["end_date"];
        $start = $_POST["start"];
        $end = $_POST["end"];
        $assign = $_POST["assign"];
        //$teacherNo =  $_SESSION['teacher_ID'];
        $sql = "INSERT INTO assignments(assignment_no,start_date, end_date, start_time, end_time, characters)
        VALUES('$assign','$start_date','$end_date','$start','$end','$question1')";
        if (mysqli_query($dbc, $sql)){
            echo'<t><t><br><script>alert("Assignment sent successfully")</script><br>';
        } else {echo "Error: ". $sql ."
        ".mysqli_error($dbc);}
        }
        


        ?>
        <html>
            <head>
                <meta charset="UTF-8" />
                <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
                <meta http-equiv="x-ua-compatible" content="ie=edge" />
                <title>Assignment details</title> 
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
            <section class="vh-100 " style="background: #f5f6fa;">
            <div class=" d-flex align-items-center h-100 gradient-custom-3">
                <div class="container h-100">
                    <div class="row d-flex justify-content-center align-items-center h-100">
                    <div>
                    <div class="card" style="border-radius: 15px;">
                        <div class="card-body p-5">
                
                <h2 class="text-uppercase text-center mb-5">Assignment details</h2>
                <form form name="form1" action="teacherdash.php" method="POST">
                    <div class="form-outline mb-4"> 
                       <input type="text" id="form3Example1cg" name="assign" maxlength="20" class="form-control form-control-lg">
                       <label class="form-label" for="form3Example1cg">Assignment_No</label>
                    </div>
                    <div class="form-outline mb-4"> 
                        <input type="date" name="start_date" id="form3Example1cg" class="form-control form-control-lg">
                        <label class="form-label" for="form3Example1cg">Start_Date</label>
                    </div>
                    <div class="form-outline mb-4">
                        <input type="date" name="end_date" id="form3Example1cg" class="form-control form-control-lg">
                        <label class="form-label" for="form3Example1cg">End_Date</label>
                    </div>
                    <div class="form-outline mb-4">
                    <input type="time" name="start" value="start_time" id="form3Example1cg" class="form-control form-control-lg">
                    <label class="form-label" for="form3Example1cg">Start_time</label>
                    </div>
                    <div class="form-outline mb-4">
                    <input type="time" name="end" value="end_time" id="form3Example1cg" class="form-control form-control-lg">
                    <label class="form-label" for="form3Example1cg">End_time</label>
                    </div>

                    <div class="form-outline mb-4">
                    Enter characters:
                    A<input id="let1" type="checkbox" value="A" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    B<input id="let2" type="checkbox" value="B" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    C<input id="let3" type="checkbox" value="C" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    D<input id="let4" type="checkbox" value="D" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    E<input id="let5" type="checkbox" value="E" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    F<input id="let6" type="checkbox" value="F" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    G<input id="let7" type="checkbox" value="G" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    H<input id="let8" type="checkbox" value="H" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    I<input id="let9" type="checkbox" value="I" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    J<input id="let10" type="checkbox" value="J" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    K<input id="let11" type="checkbox" value="K" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    L<input id="let12" type="checkbox" value="L" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    M<input id="let13" type="checkbox" value="M" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    N<input id="let14" type="checkbox" value="N" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    O<input id="let15" type="checkbox" value="O" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    P<input id="let16" type="checkbox" value="P" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    Q<input id="let17" type="checkbox" value="Q" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    R<input id="let18" type="checkbox" value="R" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    S<input id="let19" type="checkbox" value="S" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    T<input id="let20" type="checkbox" value="T" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    U<input id="let21" type="checkbox" value="U" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    V<input id="let22" type="checkbox" value="V" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    W<input id="let23" type="checkbox" value="W" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    X<input id="let24" type="checkbox" value="X" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    Y<input id="let25" type="checkbox" value="Y" name="answer1[]" onclick="CountChecks('listone',8,this)">
                    Z<input id="let26" type="checkbox" value="Z" name="answer1[]" onclick="CountChecks('listone',8,this)"><br><br>
                    <input type="submit" name="send" value="Send" class="btn btn-success">
                    </div>




                </form>
                        </div>
                    </div>
                    </div>
                </div>
                </div>
                </div>
                </section>
            <script type="text/javascript">


                function CountChecks(whichlist,maxchecked,latestcheck) {
            

                let listone = new Array("let1","let2","let3","let4","let5","let6","let7","let8","let9","let10","let11","let12","let13","let14","let15","let16","let17","let18","let19","let20","let21","let22","let23","let24","let25","let26");

                let iterationlist;
                eval("iterationlist="+whichlist);
                var count = 0;
                for( var i=0; i<iterationlist.length; i++ ) {
                if( document.getElementById(iterationlist[i]).checked == true) { count++; }
                if( count > maxchecked ) { latestcheck.checked = false; }
                }
                if( count > maxchecked ) {
                alert('Sorry, only ' + maxchecked + ' may be checked.');
                }
                }
            </script>
            <!-- MDB -->
                <script type="text/javascript" src="js/mdb.min.js"></script>
            </body>
            </html>
            <form>
        </section>
        <section id="activation" class="section4">
        <?php
//session_start();
include ('connectdb.php');
?>
<html>
    <head>
        <meta charset="UTF-8" />
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
        <meta http-equiv="x-ua-compatible" content="ie=edge" />
        <title>Activation requests</title>
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
        <section class="mb-4">
            <div class="card">
                <div class="card-header text-center py-3">
                    <h5 class="mb-0 text-center">
                        <strong>Activation requests</strong>
                    </h5>
                </div>  
                <div class="card-body">
                    <div class="table-responsive">   
                        <table class="table table-striped table-hover text-nowrap" >
                            <thead>
                                <tr>
                                    <form method="POST">
                                        
                                        <input type="text" id="myInput" class="form-control form-control-lg" name="search" placeholder="Search">
                                    </td><div>
                                       
                                    
                                </tr>
                                <tr>
                                <th scope="col">First_name</th>
                                <th scope="col">Last_name</th>
                                <th scope="col">User code</th>
                                <th scope="col">Telephone</th>
                                <th scope="col">Activation status</th>
                                <th scope="col">Activation request</th>
                                <th scope="col">Activate/Deactivate</th>
                              
                                </tr>
                            </thead>
                            <tbody id="myTable">
                                <?php 
                                            $pupils = mysqli_query($dbc,"select * from pupildetails"); 
                                            while($row = mysqli_fetch_array($pupils,MYSQLI_ASSOC))
                                        {
                                        ?>
                                        <tr> 

                                    
                                    <th scope="row"><?php echo $row['firstName']?></th>
                                    <td><?php echo $row['lastName']?></td>
                                    <td><?php echo $row['UserCode']?></td>
                                    <td><?php echo $row['TelNo']?></td>
                                    <td><?php echo $row['ActivationStatus']?></td>
                                    <td><?php echo $row['requestactivation']?></td>
                                    
                                    <td>
                                        <?php 
                                        if($row['ActivationStatus'] == "Activated")
                                            echo"
                                        <a href=deactivate.php?UserCode=".$row['UserCode']." class='btn' style='background: #e74c3c;'>Deactivate</a>";
                                        else echo "
                                    <a href=activate.php?UserCode=".$row['UserCode']." class='btn btn-success' >Activate</a>";?>
                                    </td>
                                    
                                
                                        </tr></form>
                                        <?php } ?>
                                        
                            </tbody>
                        </table>
                        <?php mysqli_close($dbc);?>
                    </div>
                </div>
            </div>
        </section>
        <!--search script-->
        <script>
            $(document).ready(function(){
                $("#myInput").on("keyup", function() {
                     var value = $(this).val().toLowerCase();
                     $("#myTable tr").filter(function() {
      $(this).toggle($(this).text().toLowerCase().indexOf(value) > -1)
                });
            });
            });
        </script>
        
        <!-- MDB -->
        <script type="text/javascript" src="js/mdb.min.js"></script>
        <!--jquery-->
        <script type="text/javascript" src="https://code.jquery.com/jquery-3.6.0.js"></script>
        
    </body>
</html>
        
        </section>
</form>
        <script>
            var ham = document.querySelector(".ham");
                 ham.addEventListener("click", function(){
                      document.querySelector("body").classList.toggle("active");})

            
    
          
        </script>
    </body>
</html>
