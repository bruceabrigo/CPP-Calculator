#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1,
        num2;
    cout << "Welcome to my calculator! \n";
    cout << "Please enter the first number: \n";
    cin >> num1;
    cout << "Thank you! Enter number 2: \n";
    cin >> num2;
    cout << "Thank you! Enter an operator: \n";
    cin >> op;

    switch(op) {
        case '+':
            cout << num1 + num2;
            break;
        default:
            cout << "You entered an invalid operator. Please choose from the following (+, -, /, *) \n";
            break;
    }

}