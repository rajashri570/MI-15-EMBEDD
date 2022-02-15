#include <stdio.h>

// Write a program in C to read 10 numbers from keyboard and find their sum and average.

int main()
{
    int i, count, avg, sum = 0;

    printf("Enter Numbers : ");
    scanf("%d", &count);

    for (i = 1; i <=count; i++)
    {

        sum += i;
        avg = sum / 10;
        printf("%d\n", i);
    }

    printf("The Sum of %d Numbers is : %d\n", count, sum);
    printf("The Average of %d Numbers is : %d\n", sum, avg);

}