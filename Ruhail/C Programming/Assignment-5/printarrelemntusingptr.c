#include <stdio.h>
int main()
{
    // 2. Write a program in C to store n elements in an array and print the elements using pointer.

   int arr[100];
   int i, num;
   int *ptr = arr;
   
   printf("Enter size of array : ");
   scanf("%d\n ", &num);


   printf("Enter Element in array :\n");

   for (i = 0; i < num; i++)
   {
       scanf("%d", ptr);

       ptr++;
   }

   ptr = arr;

   printf("Array Elements are : ");

   for (i = 0; i < num; i++)
   {
       printf("%d\n", *ptr);

       ptr++;
   }   
}