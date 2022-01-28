# Quiz Solution Chapter 16

Solution to the quiz in chapter 16 of the book Sams Teach Yourself C++ - 8th Edition.

## 1

The `std::string` class specializes the `std::basic_string` class.

## 2

To perform a case-insensitive comparison of two strings one can proceed as follows.

1. Copy both strings into two working copies by the use of the '=' operator, i.e. something like this `copy1 = s1;`.

2. Make the first string copy all lower case. This can be done by iterating over all the characters (`c`) in the string and call `::tolower(c)` on each character.

3. Repeat step 1. for the second string copy to also make this string all lower case.

4. The two string copies can now be compared using the `==` operator, i.e something like this `if (copy1 == copy2)`.

## 3

The C++ STL string and a C-style string are both used to represent a sequence of characters i.e. a text, but the underlying representation is different as well as the ways of working.

A C-style string is simply based on array of characters terminated by a special character called the null character and when working with C-style strings so are we actually handling raw pointers. C-style strings have been proven to be error prone since it is easy to forget about the null character. C-style strings also requires either to know the maximum size in advance and use static memory or being forced to manually handle memory allocation, resizing and copying of strings.

The C++ STL `std::string` is a class that serves as a container for handling of char arrays. The class manages the underlying storage in a safe way and provides methods and operators for working with strings such as comparison and concatenation. It also possible to iterate over the characters in the string and access individual characters using an index.
