#include<stdio.h>
void main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d" ,&num);

    if(num % 2 == 0)
    printf("%d is even\n",num);  
    else if(num %2 != 0)
        printf("%d is odd\n",num);
    else
        printf("%d is odd\n",num);
}