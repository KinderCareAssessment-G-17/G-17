<?php
include('connectdb.php');

$query = "SELECT assignment_no, score FROM submittedassignments";
$result = $dbc->query($query);

//initialise the array to store processed data
$jsonarray = array();
//check if there is data returned by the query
if($result->num_rows > 0){
    //converting results into an associative array
    while($row = $result->fetch_assoc()){
        $jsonarrayitem = array();
        $jsonarrayitem['label'] = $row['assignment_no'];
        $jsonarrayitem['value'] = $row['score'];
        //append the above created object into the main array
        array_push($jsonarray, $jsonarrayitem);
    }
}
$dbc->close();
//set the response content type as JSON
header('Content-type: application/json');
//output the return value of the json encode 
echo json_encode($jsonarray);
?>