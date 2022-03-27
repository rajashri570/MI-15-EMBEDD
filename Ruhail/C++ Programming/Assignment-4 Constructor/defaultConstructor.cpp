// write a program to use default constructor.

// A constructor which has no argument is known as default constructor. It is invoked at the time of creating object.


#include <iostream>
using namespace std;

class construct
{
public:
	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl
		<< "b: " << c.b << endl;
	return 1;
}
