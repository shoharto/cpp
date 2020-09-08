<?php

function recArea($l, $w)
{
    $area = $l * $w;

    return $area;
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="author" content="Bayes Ahmed Shoharto">
    <title>PHP Exercise-12</title>
</head>

<body>
<h2>Rectangle Area Function</h2>

<?php


if (!isset($_POST['submit'])) {
    ?>

<form method="post" action="#">

<p>Please enter the values of the length and width of your rectangle.</p>

<p>Length:  <input type="text" name="length" size="5" /> 

Width:  <input type="text" name="width" size="5" /></p>

<input type="submit" name="submit" value="Go" />

</form>

<?php
} else {
        $l = $_POST['length'];

        $w = $_POST['width'];


        echo "The area of a rectangle with length $l and width $w is " . recArea($l, $w). ".";
    }

?>
</body>
</html>