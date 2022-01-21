# Exercise Solutions Chapter 1

Solutions to exercises from chapter 1 in the book Sams Teach Yourself C++ in One Hour a Day - 8th edition.

## 1

The main difference between an interpreter and a compiler is in how the human readable program code is translated into the machine code that the computer can execute. A compiler will take the whole program code as input and create an object file that then is linked to form an executable that can be run by the computer, but first after the entire process is done. An interpreter will instead read the program code line by line and translates it on the go to an instruction that the computer executes directly.

## 2

The linker is part of building a C++ program and will run after the compiler is done. The input to the linker is the output from the compiler. So one or more object files, and also eventually needed library object files is the input for the linker. The linker will integrate these files together into to an executable file that can be run by the machine that the program is written for.
