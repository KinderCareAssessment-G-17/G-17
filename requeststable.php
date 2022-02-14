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