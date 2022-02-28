
// 2:- Write a C++ program to use constants and as well global and local variables.

#include <iostream>
using namespace std;

const int number1 = 10;
const int number2 = 20;

int main()
{
    cout<<"############## GLOBAL VARIABLE #############\n";
    cout << "Global variable number1 : " << number1 << "\n";
    cout << "Global variable number2 : " << number2 << "\n\n\n";

    cout<<"############## LOCAL VARIABLE #############\n";
    const int number1 = 25;
    const int number2 = 45;
    for (int i = 0; i < 1; i++)
    {
        cout << "Local variable number1 : " << number1 << "\n";
        cout << "Local variable number2 : " << number2 << "\n";
    }
}