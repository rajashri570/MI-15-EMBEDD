#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Program to Find the Number of Lines in a Text File


    FILE *ptr;

    char line1[50];
    char line2[50];
    char line3[50];
    
    char str;
    int count = 1;

    ptr = fopen("info.txt", "w");

    printf("Write Somthing in Line 1 : ");
    scanf("%s", line1);
    fprintf(ptr,"%s\n", line1);

    printf("Write Somthing in Line 2 : ");
    scanf("%s", line2);
    fprintf(ptr,"%s\n", line2);

    printf("Write Somthing in Line 3 : ");
    scanf("%s", line3);
    fprintf(ptr,"%s", line3);

    fclose(ptr);

    ptr = fopen("info.txt", "r");

    str = fgetc(ptr);
    
    while ((str = fgetc(ptr)) != EOF)
    {
        if(str == '\n')
        {
            count++;
        }
        str = fgetc(ptr);
    }
    printf("\n ==============================\n");
    printf(" Your file content are :\n %s\n %s\n %s\n ", line1, line2, line3);
    printf("==============================\n");
    printf(" Number of Lines is : %d\n", count);
    
}