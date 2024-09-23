#include <iostream>
using namespace std;

// Driver code
int main() {
    char op = '+';  // Change this value for different operations
    float num1 = 10;  // Set your desired value for num1
    float num2 = 5;   // Set your desired value for num2

    // Switch statement begins
    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Error: Invalid operator. Please use +, -, *, or /.";
    }

    return 0;
}

Output =
Result: 15
