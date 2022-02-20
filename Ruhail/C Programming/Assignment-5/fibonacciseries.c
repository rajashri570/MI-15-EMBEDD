#include <stdio.h>

int main()
{   //fibonacci series......
    int i, n1 = 0, n2 = 1, n3, num;
    printf("Enter the numbers: ");
    scanf("%d", &num);


    printf("Series of %d is : %d %d ", num, n1, n2);

    for (i = 0; i < num; i++)
    {
        n3 = n1 +n2;
        printf("%d  ", n3);

        n1 = n2;
        n2 = n3;
    }
    printf("\n");
    
}





