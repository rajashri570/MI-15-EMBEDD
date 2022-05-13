// write a program to overload the constructors.

/* The technique of having two (or more) constructors in a class is known as constructor overloading. A class can have multiple constructors that differ in the number and/or type of their parameters. It's not, however, possible to have two constructors with the exact same parameters. */


#include <iostream>
using namespace std;

class Student {

    private:
    int age;

    public:
    Student()   //Constructor with no Argument...
    {
        age = 25;
    }

    Student(int x)  //Constructor with Argument...
    {
        age = x;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Student student1, student2(35);

    cout << "Student1 Age : " << student1.getAge() <<endl;
    cout << "Student2 Age : " << student2.getAge() <<endl;

    return 0;
}