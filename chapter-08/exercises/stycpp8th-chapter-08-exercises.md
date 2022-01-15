# Exercise Solutions Chapter 8

Solutions to exercises from chapter 8 in the book Sams Teach Yourself C++ in One Hour a Day - 8th edition.

## 1

In this exercise we have the following statements and the question is what is displayed if these statements are executed.

```cpp
int number = 3;
int *pNum1 = &number;
*pNum1 = 20;
int *pNum2 = pNum1;
number *=2;
cout << *pNum2;
```

Lets walk through line by line what and see what is happening.

An `int` variable called number defined and it is set to the value 3.

A pointer to `int` called pNum1 is defined and it is set to point at the variable called number.

The `int` that pNum1 points to is set 20, this means that the variable called number is now 20.

Another pointer to `int` is defined and it points to the same address that pNum1 points to, i.e. this new pointer also point at the variable called number. So now we have two pointers that point at the same `int` variable.

The variable called number is then multiplied by 2, since it was 20 it will now then be doubled and becomes 40.

Finally the value of what the pointer pNum2 is displayed. Since pNum2 points at the variable called number so will 40 be displayed.
