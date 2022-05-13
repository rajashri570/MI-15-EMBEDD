// 5. Write a program to add array elements using stl array.
#include <iostream>
#include <numeric>
#include <array>

using namespace std;

int main()
{
    array<int, 5> arr{8, 4, 7, 1, 6};

    int sum = 0;

   sum = accumulate(arr.begin(), arr.end(), sum); // here we are using accumulate() function for find the sum of the given array

    cout << sum << endl; // print sum

    return 0;
}
