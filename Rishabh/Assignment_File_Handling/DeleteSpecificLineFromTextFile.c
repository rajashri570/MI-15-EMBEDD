
//   ################### C Program to Delete a specific Line from a Text File ######################

#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char file1[] = "file1.txt";
    char file2[] = "file2.txt";
    char curr;
    int del, line_number = 0;
    printf("Please enter the line number you want to delete : ");
    scanf("%d", &del);
    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "w");
    curr = getc(fp1);
    if (curr != EOF)
    {
        line_number = 1;
    }
    while (1)
    {
        if (del != line_number)
            putc(curr, fp2);
        curr = getc(fp1);
        if (curr == '\n')
            line_number++;
        if (curr == EOF)
            break;
    }
    fclose(fp1);
    fclose(fp2);
}