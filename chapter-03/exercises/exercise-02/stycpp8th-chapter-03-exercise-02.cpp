// Copyright 2022, Henrik Samuelsson

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
