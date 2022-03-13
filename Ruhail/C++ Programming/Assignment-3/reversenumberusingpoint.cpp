#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;
    cout<<"Enter Numbers : ";
    cin >>num;

    // cout<<"Original Number is :"<<endl;
    // for (int i = 0; i <= num; i++)
    // {
    //     cout<<i<<endl;   
    // }


    for (num = 0; num > 0; num = num / 10)
    {
        rev = rev * 10;
        rev = rev + num % 10;
    }
    
    cout<<"Reverse Number is : "<<rev<<endl;
}