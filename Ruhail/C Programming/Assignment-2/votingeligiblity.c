// 2. Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
#include <stdio.h>
int main()
{
    int age;

    printf("Enter Your Age :");
    scanf("%d ", &age);

    if (age > 17 && age <= 110)
    {
        printf("You are Eligible for vote\n");
    }
    else
    {
        printf("You are not Eligible for vote\n");
    }
}