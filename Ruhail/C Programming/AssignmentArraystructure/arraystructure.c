#include <stdio.h>
#include <string.h>

// Q1.Store 5 Student  Information in Structure and Display it.

struct student
{
    int id;
    char name[20];
    char address[100];
    char branch[50];
    int mobile_no;

} e[5];

int main()
{
    // struct employee e;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Student Record %d:\n\n", i);

        printf("=======================================\n");
        printf("Enter Student Id              : ");
        scanf("%d", &e[i].id);

        printf("Enter Student Name            : ");
        scanf("%s", e[i].name);

        printf("Enter Student address         : ");
        scanf("%s", e[i].address);

        printf("Enter Student branch          : ");
        scanf("%s", e[i].branch);

        printf("Enter Student Mobile Number   : ");
        scanf("%d", &e[i].mobile_no);

        printf("=======================================\n");
    }
    printf("\n\nStudent Information is :\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nRecord Student %d: \n", i);
        
        printf("\n=================================\n");
        printf(" Student Id          : %d\n Student Name        : %s\n Student address     : %s\n Student branch      : %s\n Student Mobile No.  : %d\n", e[i].id, e[i].name, e[i].address, e[i].branch, e[i].mobile_no);

        printf("=================================\n");
    }

    return 0;
}