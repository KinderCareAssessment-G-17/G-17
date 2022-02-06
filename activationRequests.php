<html>
    <head>
        <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.1/css/all.css">
        <meta charset="UTF-8">
       <title></title>
       <style>
            
       </style>
        <link rel="stylesheet" href="teacherdash.css">
    </head>
    <body>

        <div class="container" style="text-align:center;">
        
            <h4>Pupils that sent activation requests:</h4>
            <table id="tab1" border="1" style="text-align:center;">
                <tr>
                    <th>First name</th>
                    <th>Last Name</th>
                    <th>User code</th>
                    <th>Change Status</th>
                </tr>
            <?php
            session_start();

            $con= mysqli_connect("localhost", "root", "");
            $db= mysqli_select_db($con, "kindercare");

            if(!$con){
            echo "Connection error: " . mysqli_connect_error();
            }

            $sql= "SELECT * FROM activationrequests";
            $return= mysqli_query($con, $sql);

            while($row= mysqli_fetch_array($return))
            {
            ?>
            <form action="activate.php" method="POST">
            <tr>
                <td> <?php echo $row['firstName']; ?></td>
                <td> <?php echo $row['lastName']; ?></td>
                <td scope="row"><input type="text" style="no-outline;" name="UserCode" value="<?php echo $row['UserCode']; ?>" readonly="readonly"> </td>
                <td><input type="submit" name="activate" value="Activate" onclick()="activationSuccess"; style="margin-left:11px"></td>    
            </tr>
            </form>
            <script type="JavaScript" >
            function activationSuccess(){
                alert("Pupil was re-activated successfully!");
            }
            </script>
            <?php
            }?>
        </table>
    </div>
    </body>
</html>