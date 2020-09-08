
//s1 = 2 4 6 8 10 12 14

var series = "";
var n;
for (var i = 1; i < 10; i++) {
    n = i * 2;
    series = series + n + " ";
}
console.log("Series-1: ", series);


//s2 = 1 4 7 10 13 16

var series = "1 ";
var n = 1;
for (var i = 1; i < 10; i++) {
    n = n + 3;
    series = series + n + " ";
}
console.log("Series-2: ", series);

//s4= 1 4 3 8 5 12 7 16 9 20 ...

series = "";
var n;

for (var i = 1; i < 10; i++) {
    n = i;
    if (n % 2 == 0) {
        n = i * 2;
    }
    series = series + n + " ";
}

console.log("Series-3: ",series);

//s5 = 0 2 2 3 5 8 13

series = " 0 1 ";

n = 0;
var x =0;
var y = 1;

for(var i = 1; i<10;i++)
{
    n = x +y;
    x= y;
    y = n;
    series = series + n + " ";
}
console.log(series);