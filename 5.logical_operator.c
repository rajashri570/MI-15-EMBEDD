#include<stdio.h>
void main ()
{
    int a = 2 , b = 3 , c;

    if (a && b)
    {
        printf("Condition is True\n");
    }
    else
    {
        printf("Condition is False\n");
    }

    if (a || b)
    {
        printf("Condition is True\n");
    }
    else
    {
        printf("Condition is False\n");
    }
}