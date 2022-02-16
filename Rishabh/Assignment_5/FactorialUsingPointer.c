#include <stdio.h>

int main()
{
    int i, Number, *P;
    long int Factorial = 1;

    printf("\n Please Enter any number \n");
    scanf("%d", &Number);

    P = &Number;

    for (i = 1; i <= *P; i++)
    {
        Factorial = Factorial * i;
    }

    printf("\nFact of %d Using Normal Variable  = %ld\n", Number, Factorial);
    printf("Fact of %d Using Pointer Variable = %ld\n", *P, Factorial);

    return 0;
}