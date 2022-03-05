#include <iostream>
#include <string>
using namespace std;


void Abc(int x)
{
    if (x <= 0)
    {
        return;
    }

    Abc(x - 1);
    cout<<x;
    Abc(x-1);   
    
}
int main()
{
    Abc(3);

    return 0;
}