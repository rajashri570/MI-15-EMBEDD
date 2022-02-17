#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// function declarations
int addition();
int subtract();
int multiply();
int divide();
int sq();
int sqrt1();
void exit();

int main()
{
    int option;

    printf("Select an operation to perform the calculation : ");

    printf("\n\n================================================================================================\n\n");
    printf(" \nAddition ===> 1 \nSubtraction ===> 2 \nMultiplication ===> 3 \nDivision ===> 4 \nSquare ===> 5 \nSquare Root ===> 6 \nExit ===> 7 \n\nPlease, Make a choice ");
    printf("\n\n================================================================================================\n\n");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        addition();
        break;

    case 2:
        subtract();
        break;

    case 3:
        multiply();
        break;
    case 4:
        divide();
        break;

    case 5:
        sq();
        break;

    case 6:
        sqrt1();
        break;
    case 7:
        exit(0);
        break;

    default:
        printf("Something is wrong!! ");
        break;
    }
    printf("\n\n================================================================================================\n\n");
}


// function definition

// Function of Addition
int addition()
{
    int i, sum = 0, num, f_num;
    printf("How many numbers you want to add: ");
    scanf("%d", &num);
    printf("Enter the numbers: \n ");
    for (i = 1; i <= num; i++)
    {
        scanf(" %d", &f_num);
        sum = sum + f_num;
    }
    printf("Total Sum of the numbers = %d", sum);
    return 0;
}

// Function of Subtraction
int subtract()
{
    int n1, n2, res;
    printf("The first number is: ");
    scanf("  %d", &n1);
    printf("The second number is: ");
    scanf("  %d", &n2);
    res = n1 - n2;
    printf("The subtraction of %d - %d is: %d", n1, n2, res);
}

// Function of multiplication
int multiply()
{
    int n1, n2, res;
    printf("The first number is: ");
    scanf("  %d", &n1);
    printf("The second number is: ");
    scanf("  %d", &n2);
    res = n1 * n2;
    printf("The multiply of %d * %d is: %d", n1, n2, res);
}

// Function of Divide
int divide()
{
    int n1, n2, res;
    printf("The first number is: ");
    scanf("  %d", &n1);
    printf("The second number is: ");
    scanf("  %d", &n2);

    if (n2 == 0)
    {
        printf("\nDivisor cannot be zero. Please enter another value ");
        scanf("%d", &n2);
    }
    res = n1 / n2;
    printf("\nThe division of %d / %d is: %d", n1, n2, res);
}

// Function of Square
int sq()
{
    int n1, res;
    printf("Enter a number to get the Square: ");
    scanf("  %d", &n1);

    res = n1 * n1;
    printf("\nThe Square of %d is: %d", n1, res);
}

// Function of Square Root
int sqrt1()
{
    float res;
    int n1;
    printf("Enter a number to get the Square Root: ");
    scanf("  %d", &n1);

    res = sqrt1(n1);
    printf("\nThe Square Root of %d is: %f", n1, res);
}