# Exercises Chapter 3

Solutions to exercises from chapter 3 in the book Sams Teach Yourself C++ in One Hour a Day, 8th edition.

## 1

The value of an enum member can chosen arbitrarily as illustrated by the following program found [here](./stycpp8th-chapter-3-exercise-1.cpp) where Queen becomes 45.

## 2

A program that demonstrates that the sizes of various integer sizes can vary.

```cpp
#include <iostream>

int main()
{
    std::cout << "Size of unsigned integer is ";
    std::cout << sizeof(unsigned int);
    std::cout << std::endl;

    std::cout << "Size of a normal signed integer is ";
    std::cout << sizeof(int);
    std::cout << std::endl;

    std::cout << "Size of a long long integer is ";
    std::cout << sizeof(long long);
    std::cout << std::endl;

    return 0;
}
```

Output of the program will vary depending on the machine it runs on. Example output from one computer was the following.

```bash
Size of unsigned integer is 4
Size of a normal signed integer is 4
Size of a long long integer is 8
```
