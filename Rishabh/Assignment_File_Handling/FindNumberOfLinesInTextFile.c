
// ############################ C Program to Find the Number of Lines in a Text File ##################

#include <stdio.h>

int main()
{
    FILE *fp;
    int count_lines = 1;
    char filechar[40], chr;

    printf("Enter file name: ");
    scanf("%s", filechar);
    fp = fopen(filechar, "r");
    
    chr = getc(fp);
    while (chr != EOF)
    {
       
        if (chr == '\n')
        {
            count_lines = count_lines + 1;
        }
       
        chr = getc(fp);
    }
    fclose(fp); 
    printf("There are %d lines in %s  in a file\n", count_lines, filechar);
    return 0;
}