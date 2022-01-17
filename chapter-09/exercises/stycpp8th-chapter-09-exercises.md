# Exercise Solutions Chapter 9

Solutions to exercises from chapter 9 in the book Sams Teach Yourself C++ in One Hour a Day - 8th edition.

## 1

The goal of this exercise is to spot what is wrong in the following class declaration.

```cpp
Class Human
{
    int age;
    string name;

public:
    Human() {}
}
```

The problem is that the term Class start with an upper-case c. It shall instead be written as `class` that is the C++ keyword used to declare a class. C++ is case sensitive so the casing of the letters used in the code must be correct.
