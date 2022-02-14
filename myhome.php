<?php 

include ('connectdb.php');
if(isset($_POST['submit'])){
    $UserCode = $_POST['usercode'];
    $assign = $_POST['assignment_no'];
    $comment = $_POST['comment'];
    
    $sql = "UPDATE submittedassignments SET comment ='$comment' WHERE UserCode='$UserCode' AND assignment_no='$assign'";

    mysqli_query($dbc,$sql);
}

header('location: teacherdash.php');

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
    <meta http-equiv="x-ua-compatible" content="ie=edge" />
    <title>My Home</title>
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.11.2/css/all.css" />
    <!-- Google Fonts Roboto -->
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Roboto:wght@300;400;500;700&display=swap" />
    <!-- MDB -->
    <link rel="stylesheet" href="css/mdb.min.css" />
    <!-- Custom styles -->
    <link rel="stylesheet" href="css/style.css" />
</head>
<body>


<!--Main layout-->
<main style="margin-top: 58px" style="background: #f5f6fa;">
  <div class="container pt-4">
    <!-- Section: Main chart -->
    <section class="mb-4">
      <div class="card">
        <div class="card-header py-3">
          <h5 class="mb-0 text-center"><strong>Attempted assignments</strong></h5>
        </div>
        <div class="card-body" id="chart-container">
          
        </div>
      </div>
    </section>
    <!-- Section: Main chart -->

    <!--Section: Scores and comments-->
    <section class="mb-4">
      <div class="card">
        <div class="card-header text-center py-3">
          <h5 class="mb-0 text-center">
            <strong>Scores and Comments Report</strong>
          </h5>
        </div>
        <div class="card-body">
          <div class="table-responsive">
            <table class="table table-striped table-hover text-nowrap">
              <thead>
   
                <tr style="align-items:center;">
                  <th scope="col">User code</th>
                  <th scope="col">Assignment_no</th>
                  <th scope="col">Duration</th>
                  <th scope="col">Score</th>
                  <th scope="col">Comment</th>
                  <th scope="col">Attach comment</th>
                </tr>
              </thead>
              <tbody>
              <?php 
                    include('connectdb.php');
                    $submitted = mysqli_query($dbc,"select * from submittedassignments"); 
                    while($row = mysqli_fetch_array($submitted,MYSQLI_ASSOC))
                {
                ?>
                <tr>

                  <th scope="row"><?php echo $row['UserCode']?></th>
                  <td><?php echo $row['assignment_no']?></td>
                  <td><?php echo $row['duration']?></td>
                  <td><?php echo $row['score']?></td>
                  <td><form action="myhome.php" method="POST">
                  <input type="hidden" name="assign" value="<?php echo $row['assignment_no']?>">
                    <input type="hidden" name="usercode" value="<?php echo $row['UserCode']?>">
                  <input type="text" id="form3Example1cg" name="comment" maxlength="10"  class="form-control form-control-lg" ></td>
                <td>
                 
                <button class="btn btn-success" name="submit">SUBMIT</button></td>
                <?php  }?>
                </tr>
                </form>
              </tbody>
            </table>
          </div>
        </div>
      </div>
    </section>
    <!--Section: Scores and comments-->

    <!--Section: statistics cards-->
    <section class="mb-4" style="background: #f5f6fa;">
      <div class="row">
        <div class="col-xl-3 col-sm-6 col-12 mb-4">
          <div class="card">
            <div class="card-body">
              <div class="d-flex justify-content-between px-md-1">
                <div>
                  <h3 class="text-danger">
                    <?php
                    include("connectdb.php");
                    $query = "SELECT * FROM assignments ";
                    $result = mysqli_query($dbc,$query);
                    $num_rows = mysqli_num_rows($result);

                    echo "$num_rows";
                    ?>
                  </h3>
                  <p class="mb-0">Total Assignments</p>
                </div>
                <div class="align-self-center">
                  <i class="fas fa-rocket text-danger fa-3x"></i>
                </div>
              </div>
            </div>
          </div>
        </div>
        <div class="col-xl-3 col-sm-6 col-12 mb-4">
          <div class="card">
            <div class="card-body">
              <div class="d-flex justify-content-between px-md-1">
                <div>
                  <h3 class="text-success">
                    <?php
                    include("connectdb.php");
                    $query = "SELECT * FROM pupildetails ";
                    $result = mysqli_query($dbc,$query);
                    $num_rows = mysqli_num_rows($result);

                    echo "$num_rows";
                    ?>

                  </h3>
                  <p class="mb-0">Number of registered pupils</p>
                </div>
                <div class="align-self-center">
                  <i class="far fa-user text-success fa-3x"></i>
                </div>
              </div>
            </div>
          </div>
        </div>
        <div class="col-xl-3 col-sm-6 col-12 mb-4">
          <div class="card">
            <div class="card-body">
              <div class="d-flex justify-content-between px-md-1">
                <div>
                  <h3 class="text-warning">64.89 %</h3>
                  <p class="mb-0">% of pupils attempting assignments</p>
                </div>
                <div class="align-self-center">
                  <i class="fas fa-chart-pie text-warning fa-3x"></i>
                </div>
              </div>
            </div>
          </div>
        </div>
        <div class="col-xl-3 col-sm-6 col-12 mb-4">
          <div class="card">
            <div class="card-body">
              <div class="d-flex justify-content-between px-md-1">
                <div>
                  <h3 class="text-info">
                  <?php
                    include("connectdb.php");
                    $query = "SELECT * FROM pupildetails WHERE requestactivation='pending' ";
                    $result = mysqli_query($dbc,$query);
                    $num_rows = mysqli_num_rows($result);

                    echo "$num_rows";
                    ?>
                  </h3>
                  <p class="mb-0">Activation requests</p>
                </div>
                <div class="align-self-center">
                  <i class="far fa-life-ring text-info fa-3x"></i>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div class="row">
        <div class="col-xl-3 col-sm-6 col-12 mb-4">
          <div class="card">
            <div class="card-body">
              <div class="d-flex justify-content-between px-md-1">
                <div>
                  <h3 class="text-info">100</h3>
                  <p class="mb-0">Attempted assignments</p>
                </div>
                <div class="align-self-center">
                  <i class="fas fa-book-open text-info fa-3x"></i>
                </div>
              </div>
              <div class="px-md-1">
                <div class="progress mt-3 mb-1 rounded" style="height: 7px">
                  <div
                       class="progress-bar bg-info"
                       role="progressbar"
                       style="width: 80%"
                       aria-valuenow="80"
                       aria-valuemin="0"
                       aria-valuemax="100"
                       ></div>
                </div>
              </div>
            </div>
          </div>
        </div>
        <div class="col-xl-3 col-sm-6 col-12 mb-4">
          <div class="card">
            <div class="card-body">
              <div class="d-flex justify-content-between px-md-1">
                <div>
                  <h3 class="text-success">64.89 %</h3>
                  <p class="mb-0">% of attempted assignments</p>
                </div>
                <div class="align-self-center">
                  <i class="fas fa-edit text-success fa-3x"></i>
                </div>
              </div>
              <div class="px-md-1">
                <div class="progress mt-3 mb-1 rounded" style="height: 7px">
                  <div
                       class="progress-bar bg-success"
                       role="progressbar"
                       style="width: 60%"
                       aria-valuenow="60"
                       aria-valuemin="0"
                       aria-valuemax="100"
                       ></div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </section>
    <!--Section: statistics cards-->

  </div>
</main>
<!--Main layout-->
    <!-- MDB -->
    <script type="text/javascript" src="js/mdb.min.js"></script>
    <script type="text/javascript" src="https://cdn.jsdelivr.net/npm/chart.js@2.9.4/dist/Chart.min.js"></script>
    <!--jquery-->
    <script type="text/javascript" src="https://code.jquery.com/jquery-3.6.0.js"></script>
    <!--fusioncharts-->
    <script type="text/javascript" src="js/fusioncharts.js"></script>
    <script type="text/javascript" src="js/fusioncharts.charts.js"></script>
    <script type="text/javascript" src="js/fusioncharts.theme.zune.js"></script>
    <!-- Custom scripts -->

    <script type="text/javascript" src="js/chart.js"></script>
</body>
</html>

