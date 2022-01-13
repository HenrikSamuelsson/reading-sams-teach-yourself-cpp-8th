# Exercise Solutions Chapter 5

Solutions to exercises from chapter 5 in the book Sams Teach Yourself C++ in One Hour a Day - 8th edition.

## 1

In the quiz for this chapter so is there a code snippet that looks like this:

```cpp
int result = number << 1 + 5 << 1;
```

The intention is to double the number, then add 5, and finally double everything again. But there is a bug due to that the addition will be done before the shift. This is because the `+` operator have higher precedence than the `<<` operator.

Clarity and fixing of the bug can be achieved using parentheses:

```cpp
int result = ((number << 1) + 5) << 1;
```

Another alternative is to split the complex statement into several smaller statements:

```cpp
int temp = number;    // Assign number to a temporary variable.
temp = temp << 1;     // Double the temporary variable.
temp = temp + 5;      // Add the 5.
temp = temp << 1;     // Double everything again.
int result = temp;    // Store in result.
```
