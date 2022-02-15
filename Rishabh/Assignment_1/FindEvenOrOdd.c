#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Given Number is Even\n");
    }
    else
    {
        printf("Given Number is Odd\n");
    }

    return 0;
}