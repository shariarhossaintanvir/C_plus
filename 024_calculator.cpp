#include <iostream>
using namespace std;
int main() {
    char op;
    double num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch(op) {
    case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;
    case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;
    case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;
    case '/':
    if(num2 != 0)
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    else
    cout << "Error! Division by zero.";
    break;
    default:
    cout << "Error! Operator is not correct.";
    break;
    }
    return 0;
}
