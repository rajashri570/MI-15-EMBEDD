#include <stdio.h>
#include <string.h>
 
union student 
{
            char name[20];
            char subject[20];
            float percentage;
}record;
 
int main() 
{
 
            strcpy(record.name, "Raju");
            strcpy(record.subject, "Maths");
            record.percentage = 86.50;
 
            printf(" Name       : %s \n", record.name);
            printf(" Subject    : %s \n", record.subject);
            printf(" Percentage : %f \n", record.percentage);
            return 0;
}