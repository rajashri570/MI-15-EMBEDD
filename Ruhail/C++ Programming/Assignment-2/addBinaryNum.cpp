#include <iostream>
using namespace std;

int main()
{
    long int bin_one, bin_two, t1, t2;
    int i = 0, rem = 0, sum[16];
    cout << "Enter First Binary Number: ";
    cin >> bin_one;
    cout << "Enter Second Binary Number: ";
    cin >> bin_two;

    t1 = bin_one;
    t2 = bin_two;

    while (bin_one != 0 || bin_two != 0)
    {
        sum[i++] = (bin_one % 10 + bin_two % 10 + rem) % 2;
        rem = (bin_one % 10 + bin_two % 10 + rem) / 2;
        bin_one = bin_one / 10;
        bin_two = bin_two / 10;
    }

    if (rem != 0)
        sum[i++] = rem;

    i--;
    cout << endl
         << t1 << " + " << t2 << " = ";

    while (i >= 0)
        cout << sum[i--];

    return 0;
}