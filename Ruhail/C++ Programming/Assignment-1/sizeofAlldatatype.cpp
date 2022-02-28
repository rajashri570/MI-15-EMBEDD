#include <iostream>

using namespace std;

int main() {
    // 1) Write a program to print size of all datatypes in cpp.
    // we can find the size of each operator with the help of size of operator 

    
    cout << "Type          Size (bytes)" << endl;
    cout << "Characte      " << sizeof(char) << endl;
    cout << "Integer       " << sizeof(int) << endl;
    cout << "Long int      " << sizeof(long int) << endl;
    cout << "Float         " << sizeof(float) << endl;
    cout << "Double        " << sizeof(double) << endl;
    cout << "Long double   " << sizeof(long double) << endl;

    return 0;
}