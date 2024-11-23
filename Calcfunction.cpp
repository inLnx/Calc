#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2;
    char oper;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;
    switch (oper) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero\n";
                return 1;
            }
            result = (double)num1 / num2;
            break;
        default:
            cout << "Invalid operator\n";
            return 1;
    }

    cout << num1 << " " << oper << " " << num2 << " = " << result << endl;

    return 0;
}
  
  
  







}
