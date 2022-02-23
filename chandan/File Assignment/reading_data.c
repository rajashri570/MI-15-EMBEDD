//C Program to Illustrate Reading of Data from a File.
#include<stdio.h>
#include<stdlib.h>

void main()
{
    char a[150]="school.";
    FILE *fp = NULL;
    fp=fopen("abcd.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    else
    {
        printf("File is created\n");
    }

    fprintf(fp, "I m going to %s ",a);

}

