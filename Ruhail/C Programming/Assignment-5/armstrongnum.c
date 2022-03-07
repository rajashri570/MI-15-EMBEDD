#include <stdio.h>
int main()
{
    int count, remain, temp;
    int sum = 0;


    printf("Enter any Number : ");
    scanf("%d", &count);

    for (temp = count; count != 0; count = count/10)
    {
        remain = count % 10;

        sum = sum + (remain*remain*remain);
    }

    if (sum == temp)
    {
        printf("Given Number is Armstrong Number : %d\n",temp);
    }
    else
    {
        printf("Given Number is Not Armstrong Number : %d\n",temp);
    }
    
    
}