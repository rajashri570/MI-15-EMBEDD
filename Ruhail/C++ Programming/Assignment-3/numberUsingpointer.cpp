#include <iostream>
using namespace std;

int main()
{
    //1.Write a program to print a number which is entered from keyboard using pointer.
    int num;
    int* ptr;

    ptr = &num;

    cout << "Enter Number : ";
    cin >> num;

   
    cout << "You Entered :" << *ptr << endl;
   
}
