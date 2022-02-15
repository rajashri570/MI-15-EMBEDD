#include <stdio.h>
/* 3. Write a program in C to delete an element at desired position from an array.

Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5

Input the position where to delete: 3

Expected Output :
The new list is : 1 2 4 5 */

int main()
{
    int arr[100], i, count, pos;

    printf("Enter No. of Elements : ");
    scanf("%d", &count);

    printf("Enter the Elements :\n");
    for (i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements of array are :\n");
    for (i = 0; i < count; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("Enter the position from which the number has to be deleted : ");
    scanf("%d", &pos);
    for (i = pos; i < count - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    count = count - 1;
    printf("\nOn Deletion, Now our new array is: \n");
    for (i = 0; i < count; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}