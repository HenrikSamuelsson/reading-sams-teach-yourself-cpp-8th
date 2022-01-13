# Quiz Solution Chapter 4

Solution to the quiz in chapter 4 of the book Sams Teach Yourself C++ - 8th Edition.

## 1

The following array is part of Listing 4.1 in the book.

```cpp
int myNumbers [5] = {34, 56, -21, 5002, 365};
```

Array indexes are 0-based in C++ so the index of the first element i.e. the number 34 will be 0. The 0-based index leads to that the last number in the array i.e. 365 will have index 4 and not 5. 5 is the number of elements in the array.

It is a common type of error to forget that the array index start at 0 and by mistake do a read or write to the memory location just after the end of the array.
