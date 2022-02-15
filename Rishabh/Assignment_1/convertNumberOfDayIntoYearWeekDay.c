#include<stdio.h>
int main()
{
    int numDay, years, weeks, days;
    printf("Enter the Number of Days :");
    scanf("%d", &numDay);

    years = numDay/365;
    weeks = (numDay%365)/7;
    days = ((numDay%365)%7);

    printf("Years : %d\n", years);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d \n", days);

    return 0;

}