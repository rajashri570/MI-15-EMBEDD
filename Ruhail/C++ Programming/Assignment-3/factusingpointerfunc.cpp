#include <iostream>
using namespace std;

void factorial(int, int *);

int main()
{
    int n, fact;
    cout<<"Enter Any Number : ";
    cin >>n;

    factorial(n, &fact);
}

void factorial(int n, int *fact)
{
     *fact = 1;

    for (int i = 1; i <= n; i++)
    {
        *fact = *fact * i;
    }
    cout <<"factorial of " <<n<<" is :"<<*fact<<endl;
}
