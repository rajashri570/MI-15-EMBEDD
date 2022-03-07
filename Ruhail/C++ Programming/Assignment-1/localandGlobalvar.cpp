#include <iostream>
using namespace std;

const int var1 = 10;    // global variable --> we can access this variable (var1) in whole program...
                        //we can also access in functions or methods...
int main()
{
        // 2 )Write a program to use use constants and as well global and local variables.

        //in this program we declare global variable and local variable both global and local variable have same names with different values 

        
        cout << "This is Global Variable var1      : "<<var1<<endl;

        const int var1 = 20;    //local variable --> we can access this local variable (var1) olny inside of function or block
        
        cout <<"\n\n";

        cout << "This is Local Variable var1      : "<<var1<<endl;        
              
} 
