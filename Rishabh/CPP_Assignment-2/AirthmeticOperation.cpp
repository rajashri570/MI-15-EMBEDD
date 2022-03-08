
// Q1.Write a program in C++ to display various type or arithmetic operation using mixed data type.

#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    int num1, num2;
    double dNum1, dNum2;

    cout << "Enter Integer Number : \n==========================================================\n\n";
    cout << "Enter First Integer Number : ";
    cin >> num1;
    cout << "\nEnter Second Integer Number : ";
    cin >> num2;

    cout << "\n\nEnter Decimal Number : \n===========================================================\n\n";
    cout << "Enter First Decimal Number : ";
    cin >> dNum1;
    cout << "\nEnter First Decimal Number : ";
    cin >> dNum2;
    cout << "\n===========================================================\n\n";

    cout << " Display arithmetic operations with mixed data type :\n";
    cout << "==============================================================\n\n";
    cout << fixed << setprecision(1);

    cout << " " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << " " << dNum1 << " + " << dNum2 << " = " << dNum1 + dNum2 << endl;
    cout << " " << num1 << " + " << dNum2 << " = " << num1 + dNum2 << endl;

    cout << " " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << " " << dNum1 << " - " << dNum2 << " = " << dNum1 - dNum2 << endl;
    cout << " " << num1 << " - " << dNum2 << " = " << num1 - dNum2 << endl;

    cout << " " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << " " << dNum1 << " * " << dNum2 << " = " << dNum1 * dNum2 << endl;
    cout << " " << num1 << " * " << dNum2 << " = " << num1 * dNum2 << endl;

    cout << " " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << " " << dNum1 << " / " << dNum2 << " = " << dNum1 / dNum2 << endl;
    cout << " " << num1 << " / " << dNum2 << " = " << num1 / dNum2 << endl;
}
