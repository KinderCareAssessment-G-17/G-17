<html>
    <head>
        <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.1/css/all.css">
        <meta charset="UTF-8">
       <title></title>
        <link rel="stylesheet" href="teacherdash.css">
    </head>
    <body>

        <div class="container" style="text-align:center;">
        <fieldset>
        <form action="" method="POST">
            <h4>Pupils that sent activation requests:</h4>
            <input type="submit" name="search" value="VIEW REQUESTS" />
            <table id="tab1" border="1" style="text-align:center;">
                <tr>
                    <th>First name</th>
                    <th>Last Name</th>
                    <th>User code</th>
                    <th>Telephone number</th>
                </tr>
                <fieldset>
            <?php
            //session_start();

            $con= mysqli_connect("127.0.0.1", "root", "123@peter");
            $db= mysqli_select_db($con, "kindercare");

            if(!$con){
            echo "Connection error: " . mysqli_connect_error();
            }

            if(isset($_POST['search']))
            {
            $sql= "SELECT * FROM activationrequests";
            $return= mysqli_query($con, $sql);

            while($row= mysqli_fetch_array($return))
            {
            ?>
            <tr>
                <td> <?php echo $row['firstName']; ?></td>
                <td> <?php echo $row['lastName']; ?></td>
                <td> <?php echo $row['UserCode']; ?></td>
                <td> <?php echo $row['TelNo']; ?></td>
            </tr>
            </form>
            <?php
            }
            }?>
        </table><br>
    </div>
    </body>
</html>