
//  ##################### C Program to Replace a specified Line in a Text File ##############################

#include <stdio.h>
#include <string.h>

#define MAX 256

int main()
{
    FILE *fp1, *fp2;
    int lno, linectr = 0;
    char str[MAX], fname[MAX];
    char newln[MAX], temp[] = "temp.txt";

    printf("\n\n Replace a specific line in a text file with a new text :\n");
    printf("-------------------------------------------------------------\n");
    printf(" Input the file name to be opened : ");
    fgets(fname, MAX, stdin);
    fname[strlen(fname) - 1] = '\0';
    fp1 = fopen(fname, "r");
    if (!fp1)
    {
        printf("Unable to open the input file!!\n");
        return 0;
    }
    fp2 = fopen(temp, "w");
    if (!fp2)
    {
        printf("Unable to open a temporary file to write!!\n");
        fclose(fp1);
        return 0;
    }
    /* get the new line from the user */
    printf(" Input the content of the new line : ");
    fgets(newln, MAX, stdin);
    /* get the line number to delete the specific line */
    printf(" Input the line no you want to replace : ");
    scanf("%d", &lno);
    lno++;
    // copy all contents to the temporary file other except specific line
    while (!feof(fp1))
    {
        strcpy(str, "\0");
        fgets(str, MAX, fp1);
        if (!feof(fp1))
        {
            linectr++;
            if (linectr != lno)
            {
                fprintf(fp2, "%s", str);
            }
            else
            {
                fprintf(fp2, "%s", newln);
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove(fname);
    rename(temp, fname);
    printf(" Replacement did successfully..!! \n");
    return 0;
}
