# Quiz Solution Chapter 1

Solution to the quiz in chapter 1 of the book Sams Teach Yourself C++ - 8th Edition.

## 1

The main difference between an interpreter and a compiler is in how the human readable program code is translated into the machine code that the computer can execute. A compiler will take the whole program code as input and create an object file that then is linked to form an executable that can be run by the computer, but first after the entire process is done. An interpreter will instead read the program code line by line and translates it on the go to an instruction that the computer executes directly.

## 2

The linker is part of the set of tools used when building a C++ program and will run after the compiler is done. The input to the linker is the output from the compiler meaning that one or more object files, and also eventually needed library object files, is the linker input. The linker will integrate the object files together into to one executable file that can be run by the machine that the program is written for.

## 3

The minimal number of steps in the normal development cycle are; (1) coding which means design of the code and writing the code in an text editor, (2) build an executable by first compiling to create object files and then link these to create an executable, (3)test the program and debug to find the source of errors if the program does not behave as expected.

Step (2) is often a one step process.
