#include <stdio.h>

//2. Print given array in ascending and descending order.
int main()
{
    int arr[100];
    int i, j, n;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array : \n", n);

    for (i = 0; i < n; i++)
    {
        printf("Element - %d :", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
       for (j = 0; j < n; j++)
       {
          if (arr[j] > arr[i])
          {
              int temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
          }
          
       }
       
    }
    printf("\nAscending order is : \n");

    for (int i = 0; i < n; i++)
    {
        printf(" %d\n", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    printf("Descending order is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
    
}