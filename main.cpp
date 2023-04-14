#include <iostream>
using namespace std; // Removing the use of std

// by COLDPROYT ( https://github.com/COLDPROYT )

int main() {
    short a = 0; // Setting the initial value for the variable "a"
    short b = 0; // Setting the initial value for the variable "b"
    char operation;
    cout << "Enter first number (From -32k to 32k): "; // Requesting the variable "a"
    cin >> a; // We get the variable "a"
    cout << "Enter second number(From -32k to 32k): "; // Requesting the variable "b"
    cin >> b; // We get the variable "b"
    cout << "Enter operation (+, -, *, /)"; // Requesting the operation (+, -, *, /)
    cin >> operation; // We get the operation

    switch (operation) { // We prescribe conditions for all operations
        case '+': // Condition for operation "+"
            cout << "a + b = " << a + b << "\n";
            std::cout << "The operation was completed successfully" << "\n";
            break;
        case '-': // Condition for operation "-"
            cout << "a - b = " << a - b << "\n";
            std::cout << "The operation was completed successfully" << "\n";
            break;
        case '*': // Condition for operation "*"
            cout << "a * b = " << a * b << "\n";
            std::cout << "The operation was completed successfully" << "\n";
            break;
        case '/': // Condition for operation "/"
            cout << "a / b = " << a / b << "\n";
            std::cout << "The operation was completed successfully" << "\n";
            break;
        default: // Error
            cout << "Error, try again";
       }
    system("pause"); // Closing the console by pressing a key
    return 0; // We return the value 0 to the variable
}

