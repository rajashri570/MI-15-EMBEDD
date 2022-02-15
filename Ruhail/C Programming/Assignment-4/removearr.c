#include <stdio.h>
// 4. Write a program to remove duplicate elements from array.

int main()
{
    int n, temp;
    int arr[100];

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Input %d Elements in Array :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array is : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {

        // compare it with all elements on right
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                /*
                 *shift duplicate element to the last,
                 *by swapping it with array[size]
                 */
                temp = arr[j];
                arr[j] = arr[n - 1];
                arr[n - 1] = temp;

                // reduce size of the array
                n--;
            }
        }
    }
    printf("Filtered Array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}