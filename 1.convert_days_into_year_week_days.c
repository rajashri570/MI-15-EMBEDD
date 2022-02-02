#include<stdio.h>
void main()
{
    int days, years,weeks;
    days = 1100;

    days = days- ((years*365) + (weeks*7));
    printf("Days %d \n",days);

    weeks = (days - (years * 365))/7;
    printf("Weeks %d \n",weeks);

    years= days/365;
    printf("years %d \n",years);  
    
}