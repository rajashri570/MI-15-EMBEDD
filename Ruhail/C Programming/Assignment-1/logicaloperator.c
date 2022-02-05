// 5. Write a program to perform any operation on following operators :

// A. Logical operators
#include <stdio.h>
int main()
{
    int a = 10, b = 4, c = 10, d = 20;

    if (a > b && c == d)
    {
        //Logical AND
        printf("AND Condition is Statisfied\n ");
    }
    else
    {
        printf(" AND Condition is not Satisfied\n ");
    }

    if (a > b || c == d)
    {
        //Logical OR
        printf("OR Condition is Statisfied");
    }
    else
    {
        printf("OR Condition is not Statisfied");
    }

    if (!a)
    {
        // Logical Not!
        printf("a is zero");
    }
    else
    {
        printf("\n a is not zero");
    }

    // B. Bitwise operators

    //Bitwise AND a&b operator...
    int a1 = 5, b1 = 14;
    {
        printf("\nBitwise AND opeator a&b is :%d", a1 & b1);

        printf("\nBitwise OR opeator a|b is :%d", a1 | b1);

        printf("\nBitwise NOT opeator ^ is :%d", a1 ^ b1);

        printf("\nBitwise Complement opeator ~a is :%d", ~a1);

        printf("\nLeft-shift opeator << is :%d", a1 << 2);

        printf("\nRight-shift opeator >> is :%d", a1 >> 2);
    }
}