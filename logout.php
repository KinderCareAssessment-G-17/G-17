<?php

session_start(); // allows access to stored information to be used across multiple pages

session_destroy(); // destroys all data for this the session

header('Location: login.php'); //used for redirection to another page


?>