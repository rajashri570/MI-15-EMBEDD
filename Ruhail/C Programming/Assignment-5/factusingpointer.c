#include <stdio.h>
int main()
{
    // 5. Write a program in C to find the factorial of a given number using pointers. also write same program without using pointer
//  Using pointer variable
    int i, num, fact;
    /* int *p1, *p2;

    p1 = &num;
    p2 = &fact;

    printf("Enter Any Number : ");
    scanf("%d", p1);

    fact = 1;
    for (i = 1; i <= *p1; i++)
    {
        *p2 = *p2*i;
    }

    printf("\nFactorial of %d is : %d\n",*p1, *p2); */

    //factorial Program Without Pointer
    
    printf("Enter Any Number : ");
    scanf("%d", &num);

    fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    
    printf("\nFactorial of %d is : %d\n", num, fact);
}