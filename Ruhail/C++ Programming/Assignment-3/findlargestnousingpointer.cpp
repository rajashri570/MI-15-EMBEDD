#include <iostream>
using namespace std;

int main()
{
    // 2.write a program to find largest number using pointers.
   int* a, max;

   int arr[] = {10, 20, 5, 30, 15, 6};

   a = arr;



   
   cout<< "Array Element is : "<< endl;
   for (int i = 0; i < 6; i++)
   {
       cout << a[i] << endl;
   }

    max = a[0];

    for (int i = 0; i < 6; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        
    }

    cout <<"Largest Number is : "<< max <<endl;
    
}
