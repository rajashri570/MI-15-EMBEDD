//C program to Create a File & Store Information
#include<stdio.h>
#include<stdlib.h>
void main()
{
    
    FILE *fp= NULL; //file pointer
    char name[30];
    int age;
    float num;

    fp=fopen("student_record.txt","w");
    if(fp==NULL)
    {
        printf("File does not exist.");
        exit(1);
    }
    
    printf("Enter the Student Name\n");
    scanf("%s",name);
    fprintf(fp,"Student Name :%s\n",name);
    printf("Enter the Student Age\n");
    scanf("%d",&age);
    fprintf(fp,"Student Age :%d\n",age);
    printf("Enter the Student Number\n");
    scanf("%f",&num);
    fprintf(fp,"Student Number :%f\n",num);

    fclose(fp);
    
}
