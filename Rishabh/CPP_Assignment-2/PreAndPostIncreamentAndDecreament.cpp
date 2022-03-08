
    // Q4.Write a program in C++ to display the operation of pre and post increment and decrement.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout <<"\nPre Increament of "<< num << " is : " << (++num) <<endl;
    cout <<"\nPost Increament of "<< num << " is : " << (num++) <<endl;
    cout <<"\nPre Decreament of "<< num << " is : " << (--num) <<endl;
    cout <<"\nPost Decreament of "<< num << " is : " << (num--) <<endl;
    
}