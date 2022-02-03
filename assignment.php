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
  <form action="assignment.php" method="post">
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

