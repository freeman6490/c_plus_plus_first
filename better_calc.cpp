#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator: ";
    cin >> operation;

    if(operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        result = num1 / num2;
    } else {
        cout << "Enter a valid operator: '+, -, *, /' " << endl;
    }

    cout << result << endl;
    return 0;
}
