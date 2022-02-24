#include <stdio.h>
int main()
{   
    //Q1.C Program to Create a File & Store Information

    FILE *ptr;
    char name[25];
    int age;
    float salary;


    ptr = fopen("record.txt", "w");

    if (ptr == NULL)    //this step will run when our file does not exist
    {
        printf("Error....");
    }

    printf("Enter Your Name : ");
    scanf("%s", name);
    fprintf(ptr, "Name = %s\n", name);  //help of fprintf() we can write content in our file

    printf("Enter Your Age : ");
    scanf("%d", &age);
    fprintf(ptr, "Age = %d\n", age);

    printf("Enter Your Salary : ");
    scanf("%f", &salary);
    fprintf(ptr, "salary = %.2f\n", salary); 

    fclose(ptr);    //file close 
    
}