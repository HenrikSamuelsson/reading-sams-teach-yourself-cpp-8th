# Quiz Solution Chapter 16

Solution to the quiz in chapter 16 of the book Sams Teach Yourself C++ - 8th Edition.

## 1

The `std::string` class specializes the `std::basic_string` class.

## 2

To perform a case-insensitive comparison of two strings one can proceed as follows.

1. Copy both strings into two working copies by the use of the '=' operator, i.e. something like this `copy1 = s1;`.

2. Make the first string copy all lower case. This can be done by iterating over all the characters (`c`) in the string and call `::tolower(c)` on each character.

3. Repeat step 1. for the second string to also make this string all lower case.

4. The two string copies can now be compared using the `==` operator, i.e something like this `if (copy1 == copy2)`.
