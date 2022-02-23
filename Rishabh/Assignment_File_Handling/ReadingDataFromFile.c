
// ########################## C Program to Illustrate Reading of Data from a File ###########################

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char filename[15];
    char ch;

    printf("Enter the filename to be opened \n");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    ch = fgetc(fp);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
}
