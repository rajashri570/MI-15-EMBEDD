//C Program to Find the Size of File using File Handling Function.
#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int size = 0;

    char * arr="abc1.txt";
    fp=fopen(arr,"r");
    if(fp==NULL)
    printf("Error\n");

    else
    printf("File is open\n");
    fseek(fp,0,2);
    size=ftell(fp);

    printf("The size of given file is %d\n",size);

    fclose(fp);
}