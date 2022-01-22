# Quiz Solution Chapter 12

Solution to the quiz in chapter 12 of the book Sams Teach Yourself C++ - 8th Edition.

## 1

A subscript operator `[]` cannot be defined in two different variants where one return `const` and the other return non-`const`. This is because overloading is not allowed based on return type only, the name of the function or the parameter list must differ. This means that following code will not compile.

```cpp
// Error the operator [] differs by return type only.
const Type& operator[] (int index);
Type& operator[] (int index);
```

It is however possible to program two implementations of the operator `[]` with identical return types, one defined as a `const` function and the other not, see below code.

```cpp
Type& operator[] (int index) const;
Type& operator[] (int index);
```

The compiler will pick the non-`const` version when an assignment shall be done and the `const` version otherwise.
