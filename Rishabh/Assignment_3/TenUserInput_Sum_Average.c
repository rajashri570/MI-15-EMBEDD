#include<stdio.h>
int main()
{
    int arr[10];
    double sum = 0;
    printf("======================================\n\n");
    printf("Enter Ten User Input : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n\n======================================\n\n");

    size_t n = sizeof(arr) / sizeof(int);
    printf("Size of Array : %ld", n);

    printf("\n\n==============Stored Element========================\n\n");
     
     for (int i = 0; i < n; i++)
     {
        printf("%d\n", arr[i]);

         sum = sum + arr[i];
     }

     printf("\n\n=============SUM OF ARRAY=========================\n\n");

   
  
    printf("Sum of the array = %f\n",sum);


    printf("\n\n===============Average of Array=======================\n\n");

    
    printf("Average of Array : %f", (sum/n));

     printf("\n\n======================================\n\n");
     
    return 0;
    
}