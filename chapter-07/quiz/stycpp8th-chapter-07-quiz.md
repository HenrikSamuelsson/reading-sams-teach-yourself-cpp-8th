# Quiz Solution Chapter 7

Solution to the quiz in chapter 7 of the book Sams Teach Yourself C++ - 8th Edition.

## 1

The scope of the name of variables declared in a function's prototype is within the prototype only. Also the name here does not really matter but it is good practice to have the same names in function prototype as in the function definition. The type of the variables in the function prototype is used by the compiler to do type-checking, i.e. enables the complier to check that the function is invoked in a allowed way with correct number of arguments and type.

The variables in the function prototype are only in scope, i.e. visible and usable inside of the function definition. Attempting to use the variables outside of the function will result in a compiler error.
