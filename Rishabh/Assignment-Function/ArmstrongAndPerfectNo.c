#include <stdio.h>

int checkArmstrong(int n1);
int checkPerfect(int n1);

int main()
{
    int n1;
    printf("\n\n Function : check Armstrong and perfect numbers :\n");
    printf("\n\n==============================================================\n\n");

    printf(" Input any number: ");
    scanf("%d", &n1);

    // Calls the Armstrong() function
    if (checkArmstrong(n1))
    {
        printf(" The %d is an Armstrong number.\n", n1);
    }
    else
    {
        printf(" The %d is not an Armstrong number.\n", n1);
    }

    printf("\n\n==============================================================\n\n");

    // Calls the Perfect() function
    if (checkPerfect(n1))
    {
        printf(" The %d is a Perfect number.\n\n", n1);
    }
    else
    {
        printf(" The %d is not a Perfect number.\n\n", n1);
    }
    printf("==============================================================\n\n");
    return 0;
}

// Function for check Armstrong Number
int checkArmstrong(int n1)
{
    int ld, sum, num;
    sum = 0;
    num = n1;
    while (num != 0)
    {
        ld = num % 10;
        sum += ld * ld * ld;
        num = num / 10;
    }
    return (n1 == sum);
}
// Function for check Perfect number
int checkPerfect(int n1)
{
    int i, sum, num;
    sum = 0;
    num = n1;
    for (i = 1; i < num; i++)
    {

        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (n1 == sum);
}
