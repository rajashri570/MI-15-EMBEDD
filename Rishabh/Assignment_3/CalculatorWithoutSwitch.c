#include<stdio.h>
int main()
{
    int num1, num2, choice;
    printf("##################################################################\n\n\n");
    printf("Enter First Number : \n");
    scanf("%d", &num1);
    printf("Enter Second Number : \n");
    scanf("%d", &num2);
    printf("\n\n");
    printf("##################################################################\n\n\n");
    printf("1. For Addition\n");
    printf("2. For Substraction\n");
    printf("3. For Multiplication\n");
    printf("4. For Dividion\n");
    printf("5. For Modulas\n\n\n");
    printf("##################################################################\n\n\n");
    printf("Enter your choice : \n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Addition = %d\n", (num1 + num2));
    }
    else if (choice == 2)
    {
        printf("Substraction = %d\n", (num1 - num2));
    }
    else if (choice == 3)
    {
       printf("Multiplication = %d\n", (num1 * num2));
    }
    else if (choice == 4)
    {
       printf("Division = %d\n", (num1 / num2));
    }
    else if (choice == 3)
    {
       printf("Modulas = %d\n", (num1 % num2));
    }
    else
    {
        printf("%d, It is not valid choice\n  ", choice);
    }
    return 0;   
    
}