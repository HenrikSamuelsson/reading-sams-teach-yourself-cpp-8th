# Quiz Solution Chapter 17

Solution to the quiz in chapter 17 of the book Sams Teach Yourself C++ - 8th Edition.

## 1

Elements cannot be inserted at the middle or the beginning of a vector in constant time. This is because inserting at other places than the end requires moving other elements to leave room for the element to be inserted. Insertion at the end will be done in constant time, with the exception for when the vector happens to be full and more memory need to be allocated possibly requiring moving the content of the vector.
