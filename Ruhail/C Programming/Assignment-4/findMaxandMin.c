#include <stdio.h>

// 1. Write a program in C to find the maximum and minimum element in an array.
int main()
{
    int arr[100];
    int i, max, min, n;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array : \n", n);

    for (i = 0; i < n; i++)
    {
        printf("Element - %d :", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);
}