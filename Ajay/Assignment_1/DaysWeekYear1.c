#include<stdio.h>

int main()
{
int days=500;
int Years=363;
int week=7;
int rd=0;

	int y=0;
	y=days%Years;
	Years=days/Years;
	int x=y%week;
	week=y/week;

 printf("Total Days:%d\nConvert into 'Year' 'Week' 'Day' \n",days);
 printf("years:%d\n",Years);
 printf("Weeks:\%d\n",week);
 printf("Days:%d\n",x);


//printf("weeks:%d\tYears:%d\n%d\n",week,Years,rd);
return 0;
}
