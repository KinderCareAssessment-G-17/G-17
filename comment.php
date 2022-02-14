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
