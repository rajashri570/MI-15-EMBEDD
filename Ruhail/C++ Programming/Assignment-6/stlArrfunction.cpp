#include <iostream>
#include <array>
#include <numeric>
using namespace std;

int main(){
    

    array <int, 7> arr1 = {10, 20, 30, 40, 50};  //creating array

    array <int, 7> arr2 = {8, 10, 12, 14, 16};  //creating array

    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<"\t";
    }
    cout<<endl;

    cout<<"\nGiven position index value is : ";    //it will rerturn the value in the array at the given range
    cout<<arr1.at(2);    //it will rerturn the value in the array at the given range
    cout<<endl;

    cout<<"\nFirst Index value is : ";
    cout<<arr1.front();         //it will print first element in the array
    cout<<endl;

    cout<<"\nlast Index value is : ";   
    cout<<arr1.back();          //it will last element in the array
    cout<<endl;


    arr1.fill(1);   //initialzation all array element with 1
    // cout<<endl;

    arr1.swap(arr2);    // it will interchange two arrays using swap function

    cout<<"\narr1 elements are : ";

    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<"\t";
    }
    cout<<endl;

    cout<<"\narr2 elements are : ";

    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<"\t";
    }
    cout<<endl;

    arr1.empty();
    {
        if (arr1.empty())   //it will check weather array is empty or not
        {
            cout<<"\nArray element arr1 is empty!"<<endl;
        }

        else

        {
            cout<<"\nArray element arr1 is not empty!"<<endl;
        }
    }

    cout<<"\nNumber of elements are in arr1 : "<<arr1.size();   //it will return the size of array 
    cout<<endl;

    int a = 10, b = 20, sum = 0;
    cout<<"\nMax value is between a and b : "<<max(a, b)<<endl;     //return maximum value between two values


    return 0;
}