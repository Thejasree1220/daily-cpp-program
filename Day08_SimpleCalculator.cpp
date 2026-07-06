#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    switch(op)
    {
        case '+':
            cout << "Result = " << num1 + num2;
            break;
        case '-':
            cout << "Result = " << num1 - num2;
            break;
        case '*':
            cout << "Result = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Division by zero is not allowed.";
            break;
        default:
            cout << "Invalid Operator";
    }
}
