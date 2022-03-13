#include <iostream>
using namespace std;

float a;
float b;
double sum, sub, mul, divid;
int ch;
// Write a program in C++ to display various type or arithmetic operation using mixed data type.
// here i am creating functions for each of airthmatic operations
int main()
{

    cout << "\n\t\t\t\t\t=====Arithmatic Operation=====\n\n";
    cout << "\t\t\t\t\t\t1. Addition\n";
    cout << "\t\t\t\t\t\t2. Subtraction\n";
    cout << "\t\t\t\t\t\t3. Multiplication\n";
    cout << "\t\t\t\t\t\t4. Division\n";
    cout << "\t\t\t\t\t\t___________________________\n";

    cout << "\t\t\t\t\t\tEnter Your Choice      : ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "\t\t\t\t\t\tEnter Integer Number   : ";
        cin >> a;
        cout << "\t\t\t\t\t\tEnter Float Number     : ";
        cin >> b;
        cout << "\t\t\t\t\t\t___________________________\n";
        sum = a + b;
        cout << "\t\t\t\t\t\tSum is                 : " << sum << endl;
        break;
    case 2:
        cout << "\t\t\t\t\t\tEnter Integer Number   : ";
        cin >> a;
        cout << "\t\t\t\t\t\tEnter Float Number     : ";
        cin >> b;
        cout << "\t\t\t\t\t\t___________________________\n";
        sub = a - b;
        cout << "\t\t\t\t\t\tSubtraction is         : " << sub << endl;
        break;
    case 3:
        cout << "\t\t\t\t\t\tEnter Integer Number   : ";
        cin >> a;
        cout << "\t\t\t\t\t\tEnter Float Number     : ";
        cin >> b;
        cout << "\t\t\t\t\t\t___________________________\n";
        mul = a * b;
        cout << "\t\t\t\t\t\tMultiplication is      : " << mul << endl;
        break;
    case 4:
        cout << "\t\t\t\t\t\tEnter Integer Number   : ";
        cin >> a;
        cout << "\t\t\t\t\t\tEnter Float Number     : ";
        cin >> b;
        cout << "\t\t\t\t\t\t___________________________\n";
        divid = a / b;
        cout << "\t\t\t\t\t\tDivision is            : " << divid << endl;
        break;
    default:
        cout << "\n\t\t\t\t\t\tYou Entered Wrong Choice!!\n";
        break;
    }
    return 0;
}
