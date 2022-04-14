// 2. What write a template function to sort array elements in array.

#include <iostream>
using namespace std;

template <class T> // here we create a template function to perform sorting array operation, T is a datatype we can print different type values like int, float, double with the help of T datatype

void sortArr(T arr[], int size) // create a templete function with passing argument
{
    for (int i = 0; i < size - 1; i++) // for loop use for element in descending order

        for (int j = i + 1; j < size; j++) // for loop start with 1
        {
            if (arr[i] > arr[j]) // it will check i value is greater than j values then
            {
                swap(arr[i], arr[j]); // it will call swap function, this process continue until when all element will be sorted...
            }
        }
}

template <class T>  //again create template function with name swap 

void swap(T val1, T val2) //swap function, here T is datatype 
{
    T temp = val1;

    val1 = val2;

    val2 = temp;
}

template <class T>

void display(T arr[], int size) //here we are disply our array values
{
    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << "\t " << arr[i];
    }

    cout << "\n";
}
int main()
{

    int arr[5] = {10, 7, 4, 3}; //create array variable with initialze size and element

    cout << "\n ==============Original Array==============\n";

    display(arr, 5);    //call display function and passing argument values

    sortArr(arr, 5);    //call sortArr function and passing values

    cout << "\n ==============Sorted Array================\n";
    display(arr, 5);    //again call display for display sorted array
}