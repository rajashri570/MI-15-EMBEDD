//C Program to Find the Number of Lines in a Text File

#include <stdio.h>

int main()

{
    FILE *fp=NULL;

    int count_line = 0;
    char filechar[40], chr;

    printf("Enter file name: ");
    scanf("%s", filechar);
    fp = fopen(filechar, "r");

    chr = getc(fp);
    while (chr != EOF)

    {
        if (chr == 'n')
        {
            count_line = count_line + 1;
        }
        
        chr = getc(fp);//take next character from file.
    }
    fclose(fp); 

    printf("There are %d lines in %s  in a file\n", count_line, filechar);

}