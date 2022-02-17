#include <stdio.h>

union student
{
    char name[50];
    int id;
    char address[50];
};

int main( )
{
    union student stu;
    printf("\nEnter the name of the student: ");
    scanf("%s", &stu.name);
    printf("The name of the student entered is %s\n", stu.name);
    printf("Enter the id of student: ");
    scanf("%ld", &stu.id);
    printf("The id of the student entered is %d\n", stu.id);
    printf("Enter the address of the student: ");
    scanf("%s", &stu.address);
    printf("The address of the student entered is %s\n", stu.address); 
    return 0;
}