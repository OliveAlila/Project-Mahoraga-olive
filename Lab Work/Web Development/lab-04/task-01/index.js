/*
Variables declared with var are function-scoped.
They can be accessed within the function where they are declared or globally if declared outside of a function. 
They can be accessed even outside of the block they are declared in. 
*/
var age = 17;

/*
Variables declared with let are block-scoped. 
They are accessible only within the block they are declared in. 
*/
let salamu = "Hello, world!";

/*
Variables declared with const are also block-scoped like let variables. 
However, const variables cannot be reassigned once they are initialized. 
They are useful for declaring  values that should not change throughout the program.
*/
const car = [1, 2, 3];
