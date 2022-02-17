#include <stdio.h>
int main()
{
    char ch1 = 'a', ch2 = 'A';

    for (int i = 1; i < 27; i++)
    {

        printf("The entered character %c ====> ASCII is %d\n", ch1, ch1);
        ch1++;
    }
    for (int i = 1; i < 27; i++)
    {

        printf("The entered character %c ====> ASCII is %d\n", ch2, ch2);
        ch2++;
    }
}