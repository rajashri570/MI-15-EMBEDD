#include <stdio.h>
#include<stdlib.h>

int main()

{

    FILE *fp;

    char name[20];

    int std_id;

    char branch[20];

    /*  open for writing */

    fp = fopen("std.rec", "w");

    if (fp == NULL)

    {

        printf("File does not exists \n");

        exit(0);

    }

    printf("Enter the name \n");

    scanf("%s", name);

    fprintf(fp, "Name    = %s\n", name);

    printf("Enter the student id\n");

    scanf("%d", &std_id);

    fprintf(fp, "Age     = %d\n", std_id);

    printf("Enter the branch\n");

    scanf("%s", branch);

    fprintf(fp, "branch  = %s\n", branch);

    fclose(fp);

}