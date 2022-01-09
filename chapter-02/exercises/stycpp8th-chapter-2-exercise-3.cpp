// Copyright 2022, Henrik Samuelsson

#include <iostream>

// Function declaration.
int demoConsoleOutput();

int main()
{
    // Call i.e. invoke the function.
    demoConsoleOutput();

    return 0;
}

// Function definition i.e. implementation of the previously declared function.
int demoConsoleOutput()
{
    using std::cout;
    using std::endl;

    cout << "Performing subtraction, 5 minus 3 is " << 5 - 3 << "." << endl;
    cout << "Performing multiplication, 5 times 3 is " << 5 * 3 << "." << endl;

    return 0;
}
