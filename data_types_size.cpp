#include <iostream>
#include <limits> // Included to reset cin error state if needed, though not strictly required here.

/**
 * @brief Demonstrates declaration, value, and size of basic C++ data types.
 *
 * This program declares and initializes variables of type:
 * int, float, char, and bool.
 * It then prints the value and the memory size (in bytes) of each
 * variable using the sizeof() operator.
 * we will cover strings later .
 */
int main() {
    // 1. Declare and initialize an integer variable (int)
    int myInt = 42;

    // 2. Declare and initialize a floating-point variable (float)
    float myFloat = 3.14159f;

    // 3. Declare and initialize a character variable (char)
    char myChar = 'A';

    // 4. Declare and initialize a boolean variable (bool)
    bool myBool = true; // true is equivalent to 1, false is equivalent to 0

    std::cout << "--- C++ Variable Information ---\n\n";

    // --- Integer (int) ---
    std::cout << "Variable Type: int\n";
    std::cout << "Value: " << myInt << "\n";
    std::cout << "Size of variable (bytes): " << sizeof(myInt) << "\n";
    std::cout << "Size of type 'int' (bytes): " << sizeof(int) << "\n";
    std::cout << "--------------------------------\n";

    // --- Floating Point (float) ---
    std::cout << "Variable Type: float\n";
    std::cout << "Value: " << myFloat << "\n";
    std::cout << "Size of variable (bytes): " << sizeof(myFloat) << "\n";
    std::cout << "Size of type 'float' (bytes): " << sizeof(float) << "\n";
    std::cout << "--------------------------------\n";

    // --- Character (char) ---
    std::cout << "Variable Type: char\n";
    std::cout << "Value: " << myChar << " (ASCII value is: " << (int)myChar << ")\n";
    std::cout << "Size of variable (bytes): " << sizeof(myChar) << "\n";
    std::cout << "Size of type 'char' (bytes): " << sizeof(char) << "\n";
    std::cout << "--------------------------------\n";

    // --- Boolean (bool) ---
    std::cout << "Variable Type: bool\n";
    // Using std::boolalpha to print 'true' or 'false' instead of 1 or 0
    std::cout << "Value: " << std::boolalpha << myBool << "\n";
    std::cout << "Size of variable (bytes): " << sizeof(myBool) << "\n";
    std::cout << "Size of type 'bool' (bytes): " << sizeof(bool) << "\n";
    std::cout << "--------------------------------\n";

    return 0;
}
