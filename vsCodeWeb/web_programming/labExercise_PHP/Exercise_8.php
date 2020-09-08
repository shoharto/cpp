<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="author" content="Bayes Ahmed Shoharto">
    <title>PHP Exercise-08</title>
</head>

<body>


<?php

$currMonth=date('F', time());

if ($currMonth == 'August') {
    echo "<p>It's August, so it's really hot.</p>";
} else {
    echo "<p>Not August, so at least not in the peak of the heat.</p>";
}


?>


</body>
</html>