<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <style> 
body {
    background-image: url("background1.jpg");
  background-position:center;
  background-repeat: no-repeat;
  background-attachment: fixed;
  background-size: 100% 100%;
  }

  .header{
    font-size: 40px;
    font-family: arial;
    align-items: center;
    display: flex;
    justify-content: space-around;
    background-color: transparent;
  padding:10px;
 opacity:0.6;
}
.header img{
    width:170px;
    height:90px;
}
.d4, .d3{
    margin-bottom: 10px;
    padding: 10px;
    border-radius: 5px;
}
form{
    float: center;
    margin: 100px 400px 400px 400px;
    background-color: #ffffff;
      padding:40px 40px 80px 200px;
      border-radius: 10px;
      opacity: 0.7;
      font-size:xx-large;}
.main_div {
 --color: #3992e6;
 position: relative;
 z-index: 1;
}

.main_div::before {
 content: '';
 position: absolute;
 width: 30px;
 height: 30px;
 background: transparent;
 top: -7px;
 left: -7px;
 z-index: -5;
 border-top: 3px solid var(--color);
 border-left: 3px solid var(--color);
 transition: 0.5s;
}

.main_div::after {
 content: '';
 position: absolute;
 width: 30px;
 height: 30px;
 background: transparent;
 bottom: -7px;
 right: -7px;
 z-index: -5;
 border-right: 3px soli;
 bottom: -7px;
right: -7px; z-index: -5;
 border-right: 3px solid var(--color);
 border-bottom: 3px solid var(--color);
transition: 0.5s;
}

.main_div:hover::before {
 width: 100%;
 height: 100%;
}

.main_div:hover::after {
 width: 100%;
 height: 100%;
}

.main_div button {
 padding: 0.7em 2em;
 font-size: 16px;
 background: #222222;
 color: #fff;
 border: none;
 cursor: pointer;
 font-family: inherit; 
}
</style>
<!--<link rel="stylesheet" type = "text/css"href="style.css">-->
    <title>Login</title>
</head>
<body>
<div class="header">
    <img src="logo.png">
    <p style="color:black"; > KINDERCARE </p>
   <div class = "d3"> <a href="contact.php">CONTACT US</a>  
         <a href="contact.php">ABOUT</a>
    </div>
</div>
