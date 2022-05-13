// 3. Write one program to template class.

#include <iostream>
using namespace std;

template <class T>
class sum           //template class
{
    T x, y, z;      //T is datatype and x y z is variale of T type

public:
    sum(T val1, T val2) //here we create a sum name constructor, in the constructor we have pass argument using T data type 
    {
        x = val1;   

        y = val2;
    }

    void display()  //create display function for display sum of two variable 
    {
        z = x + y;

        cout << "Sum of two values is : " << z << endl;
    }
};
int main()
{

    sum<int> obj1(20, 10);  //create object and calling with passing argument values
    obj1.display();         //display sum of two valriable

    /* sum<float> obj1(5.5, 4.5);
    obj1.display(); */
}