#include <iostream>
/** 
 * @ Global variable is defined outside the function and 
 * Local variable is defined inside the function . 
 * :: is the scope resolution operator . It tells if a variable is global or not . See line 15 for refrence .
 */
// Global variable
int number = 100;

int main() {
    // Local variable with the same name
    int number = 50;
    
    std::cout << "Local variable 'number': " << number << std::endl;
    std::cout << "Global variable 'number': " << ::number << std::endl;
    
    return 0;
}
