#include <stdio.h>
int main()
{
    // Q2.C Program to Illustrate Reading of Data from a File.
    FILE *ptr;
    char str;
    ptr = fopen("record.txt", "r");

    printf("Our file content is :\n");
    
    while ((str = fgetc(ptr))!= EOF)    //print all content till our content reach EOF (end of file)
    {
        printf("%c",str);
    }
    fclose(ptr);
}