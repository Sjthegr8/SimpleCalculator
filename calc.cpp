#include <iostream>
#include <cmath>

int main() {
    char op;
    double num1, num2, result;

    std::cout << "********* CALCULATOR ***********\n"
              << "Enter operator (+, -, *, /, %, ^, r for square root): ";
    std::cin >> op;

    if (op == 'r') { // Square root operation
        std::cout << "Enter a number: ";
        std::cin >> num1;
        if (num1 < 0) {
            std::cout << "Error: Cannot take square root of a negative number.\n";
            return 1;
        }
        result = std::sqrt(num1);
    } else {
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        if (op == '+') result = num1 + num2;
        else if (op == '-') result = num1 - num2;
        else if (op == '*') result = num1 * num2;
        else if (op == '/') {
            if (num2 == 0) {
                std::cout << "Error: Division by zero is undefined.\n";
                return 1;
            }
            result = num1 / num2;
        } else if (op == '%') { 
            if (static_cast<int>(num2) == 0) {
                std::cout << "Error: Modulo by zero is undefined.\n";
                return 1;
            }
            result = static_cast<int>(num1) % static_cast<int>(num2);
        } else if (op == '^') result = std::pow(num1, num2);
        else {
            std::cout << "That wasn't a valid operator.\n";
            return 1;
        }
    }

    std::cout << "Result: " << result << '\n'
              << "**********************************\n";
    return 0;
}
