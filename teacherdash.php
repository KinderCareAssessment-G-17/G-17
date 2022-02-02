<?php

?>
<html>
    <head>
        <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.1/css/all.css">
        <meta charset="UTF-8">
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
                    <a href="#home" class="active">
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
     
        <section id="home" class="section1">Home</section>
        <section id="dash" class="section2">
            <?php include("pupilRegistrationpage.php")?>
        </section>
        <section id="assignments" class="section3">
        <?php

include "connectdb.php";


if (isset($_POST['send'])){
  //get values from form
  $question1 = implode(",", $_POST["answer1"]);
  $date = $_POST["date"];
  $start = $_POST["start"];
  $end = $_POST["end"];
  $sql = "INSERT INTO assignments(da_te, start_time, end_time, characters)
  VALUES('$date','$start','$end','$question1')";
  if (mysqli_query($dbc, $sql)){
    echo "<br>Assignment sent successfully";
  } else {echo "Error: ". $sql ."
  ".mysqli_error($dbc);}
}
  


?>
<html>
    <body>
        <p>ASSIGNMENT DETAILS</p>
  <form action="teacherdash.php" method="post">
    Date: <input type="date" name="date"><br><br>
    Start_time:<input type="time" name="start" value="start-time"><br><br>
    End_time:<input type="time" name="end" value="end_time"><br><br>

    Enter characters:
    A<input type="checkbox" value="A" name="answer1[]">
    B<input type="checkbox" value="B" name="answer1[]">
    C<input type="checkbox" value="C" name="answer1[]">
    D<input type="checkbox" value="D" name="answer1[]">
    E<input type="checkbox" value="E" name="answer1[]">
    F<input type="checkbox" value="F" name="answer1[]">
    G<input type="checkbox" value="G" name="answer1[]">
    H<input type="checkbox" value="H" name="answer1[]">
    I<input type="checkbox" value="I" name="answer1[]">
    J<input type="checkbox" value="J" name="answer1[]">
    K<input type="checkbox" value="K" name="answer1[]">
    L<input type="checkbox" value="L" name="answer1[]">
    M<input type="checkbox" value="M" name="answer1[]">
    N<input type="checkbox" value="N" name="answer1[]">
    O<input type="checkbox" value="O" name="answer1[]">
    P<input type="checkbox" value="P" name="answer1[]">
    Q<input type="checkbox" value="Q" name="answer1[]">
    R<input type="checkbox" value="R" name="answer1[]">
    S<input type="checkbox" value="S" name="answer1[]">
    T<input type="checkbox" value="T" name="answer1[]">
    U<input type="checkbox" value="U" name="answer1[]">
    V<input type="checkbox" value="V" name="answer1[]">
    W<input type="checkbox" value="W" name="answer1[]">
    X<input type="checkbox" value="X" name="answer1[]">
    Y<input type="checkbox" value="Y" name="answer1[]">
    Z<input type="checkbox" value="Z" name="answer1[]"><br><br>
    <input type="submit" name="send" value="Send">





  </form>



    </body>
    </html>

        </section>
        <section id="activation" class="section4">Activation Requests</section>

        <script>
            var ham = document.querySelector(".ham");
                 ham.addEventListener("click", function(){
                      document.querySelector("body").classList.toggle("active");})
        </script>
    </body>
</html>
