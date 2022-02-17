#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[100];
    char address[100];
    char branch[100];

}e[5];

int main()
{
    // struct student e;
    
    printf("Enter Records : ");
    for(int i=0; i<5; i++)
    {
        printf("Enter student Id :");
        scanf("%d",&e[i].id);
        printf("Enter Student Name : ");
        scanf("%s", &e[i].name);
        printf("Enter Student Address : ");
        scanf("%s", &e[i].address);  
        printf("Enter Student Branch : ");
        scanf("%s", &e[i].branch);
    }

    printf("\n\n\n======Student Information================\n\n\n");
    for(int i=0; i<2; i++)
    {
        printf("\nStudent Id : %d, Student Name : %s, Student Address : %s, Student Branch : %s\n",e[i].id, e[i].name, e[i].address, e[i].branch);
    }
}