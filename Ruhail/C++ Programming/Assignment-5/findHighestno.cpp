#include <iostream>
using namespace std;
class B;
class A
{
    int a;

    public:
    void geta() //normal function
    {
        cout<<"Enter the value of a : ";
        cin>>a;
    }
    friend void max(A, B);  //friend function

};

class B
{
    int b;

    public:
    void getb() //normal function
    {
        cout<<"Enter the value of b : ";    
        cin>>b;
    }
    friend void max(A, B);  //friend function
};

void max(A t1, B t2)    //normal function 
{
    if(t1.a > t2.b)
    {   
        cout<<"Maximum Value is : "<<t1.a<<endl;
    }

    else

    {
        cout<<"Maximum Value is : "<<t2.b<<endl;
    }
}

int main()
{
    A obj1;
    B obj2;

    obj1.geta();
    obj2.getb();

    max(obj1, obj2);
}