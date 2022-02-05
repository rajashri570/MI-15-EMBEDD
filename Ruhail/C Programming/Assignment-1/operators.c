/*
4. Write a program to perform any operation on following operators : 

A. Arithmetic Operations
C. Assignment Operator
D. Comparison operators
*/

#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    float result; 
    
    printf(" Addtion \n Subtraction \n Multiplication \n Division \n Mudulas \n ");
    printf("Select Option : \n");
    scanf("%c", &op);

   printf("Enter Two Numbers : ");
   scanf("%d %d", &num1, &num2);


    //Comparison Operator...
    if(op == '+')
    {
        result = num1 + num2;
        printf("Addition of %d and %d is : %f", num1, num2, result);
    }
    else if (op == '-')
    {   //Assignment Operator and Arithmatic Operator...
        result = num1 - num2;
        printf("Subtraction of %d and %d is : %f", num1, num2, result);
    }

    else if (op == '*')
    {
        result = num1 * num2;
        printf("Multiplication of %d and %d is : %f", num1, num2, result);
    }
    
    else if (op == '/')
    {
        result = num1 / num2;
        printf("Devision of %d and %d is : %f", num1, num2, result);
    }

    else if (op == '%')
    {
        result = num1 % num2;
        printf("Mudulas of %d and %d is : %f", num1, num2, result);
    }

    else
    {
        printf("You entered wrong Choice\n");
    }
    
}