<html>
    <head>
        <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.1/css/all.css">
        <meta charset="UTF-8">
       <title></title>
        <link rel="stylesheet" href="teacherdash.css">
    </head>
    <body>

        <div class="container">
           <form action="" method="POST">

            <h4>Activated students</h4>

            <input type="submit" name="search" value="VIEW ACTIVE" />
        
            <table id="tab1" border="1">
                <tr>
                    <th>First name</th>
                    <th>Last Name</th>
                    <th>User code</th>
                    <th>Telephone number</th>
                    <th>Deactivate</th>
                </tr>
                <?php
                session_start();

                $con= mysqli_connect("localhost", "root", "");
                $db= mysqli_select_db($con, "kindercare");

                if(!$con){
                echo "Connection error: " . mysqli_connect_error();
                }

                if(isset($_POST['search']))
                {
                $sql= "SELECT * FROM pupilDetails WHERE ActivationStatus='Activated'";
                $return= mysqli_query($con, $sql);

                while($row= mysqli_fetch_array($return))
                {
                ?>
                <tr>
                    <td> <?php echo $row['firstName']; ?></td>
                    <td> <?php echo $row['lastName']; ?></td>
                    <td> <?php echo $row['UserCode']; ?></td>
                    <td> <?php echo $row['TelNo']; ?></td>
                    <td> <?php echo $row['ActivationStatus']; ?></td>
                    </form>
                    <form action="deactivate.php" method="POST">
                    <td> <input type="submit" name="deactivate" value="DEACTIVATE PUPIL"/></td>
                    </form>
                </tr>
                <?php
                }
                }?>
            </table>
       </form>
    </div>

    <div id="container">
        <h4>Deactivated students</h4>
        <form action="" method="POST">
            <input type="submit" name="searcha" value="VIEW DEACTIVATED" />
                <table id="tab2" border="1">
                    <tr>
                        <th>First name</th>
                        <th>Last Name</th>
                        <th>User code</th>
                        <th>Telephone number</th>
                        <th>Activation Status</th>
                    </tr>
                    <?php
                    $con= mysqli_connect("localhost", "root", "");
                    $db= mysqli_select_db($con, "kindercare");

                    if(!$con){
                    echo "Connection error: " . mysqli_connect_error();
                    }

                    if(isset($_POST['searcha']))
                    {
            
                    $sql= "SELECT * FROM pupildetails WHERE ActivationStatus='Deactivated'";
                    $return= mysqli_query($con, $sql);

                    while($row= mysqli_fetch_array($return))
                    {
                    ?>
                    <tr>
                        <td> <?php echo $row['firstName']; ?></td>
                        <td> <?php echo $row['lastName']; ?></td>
                        <td> <?php echo $row['UserCode']; ?></td>
                        <td> <?php echo $row['TelNo']; ?></td>
                        <td> <?php echo $row['ActivationStatus']; ?></td>
                    </tr>
                    <?php }
                    }?>
                </table> 
            </form>
        </div>
    </body>
</html>