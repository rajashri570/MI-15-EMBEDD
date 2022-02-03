//2. Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
#include<stdio.h>
void Voter(int age)
{
	if(age>18)
	{
		printf("Candidate is Eligible\n");
	}
	else
	{
		printf("Candidate are Not Eligible");
	}
}

int main()
{
int ino=0;
printf("Enter The Age");
scanf("%d",&ino);
 Voter(ino);
return 0;
 }
