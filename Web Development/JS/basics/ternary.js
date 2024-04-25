/*
TERNARY OPERATOR SYNTAX
condition ? thing 1 : thing 2
*/

let num1 = 1;
let num2 = 2;

/*
if (num1 > num2) {
    console.log("Num1 is greater");
} else {
    console.log("Num2 is greater");
}
num1 > num2 ? console.log("Num1 is greater") : console.log("Num2 is greater");
*/

num1 = 2;
num2 = 2;

if (num1 > num2) {
    console.log("Num1 is greater");
} else if (num2 > num1) {
    console.log("Num2 is greater");
} else {
    console.log("They are equal");
}


// num1 > num2 ? console.log("Num1 is greater") : num2 > num1 ? console.log("Num2 is greater") : console.log("They are equal");
