# Quiz Solution Chapter 3

Solution to the quiz in chapter 3 of the book Sams Teach Yourself C++ - 8th Edition.

## 1

The main difference between a signed integer and an unsigned integer is that negative numbers can be stored in a variable of signed integer type, an unsigned integer can only hold positive numbers.

Another difference is that an unsigned integer can hold larger numbers than the signed integer. This is due to that 1 bit is used to store the sign of the number in a signed int. Missing out on this single bit will actually half the possible range of positive numbers.

## 2

Prefer using `const` qualified objects instead of `#define` macros. The problem with macros is that they do not obey the C++ scope and type rules. This leads to that errors can sneak in when using a macro that the compiler could have spotted automatically if a `const` qualified object had been used.

## 3

C++ variables should be initialized to ensure that they contain a known, non-random value. It is so that some type of variables will automatically be initialized to 0 but this does not always hold true. It follows that it is good practice, and for some variable types also absolutely necessary to have explicit initialization. The initialization can be done either directly at the point of declaration or otherwise at the latest right before first usage.
