//4. Write a C program to find the eligibility of admission for a professional course based on the //following criteria: 

//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140
#include<stdio.h>

int main()
{
int maths=0,phy=0,chem=0,total=0;

printf("Enter the marks: Mathematis Physics Chemestry  \n");
scanf("%d%d%d",&maths,&phy,&chem);

if(maths <= 0 || phy <= 0 || chem <= 0 || maths >= 100 || phy >= 100 || chem >= 100)
{
	printf("Enterd Wrong Marks/n");
	return -1;
}

if(maths >=65 && phy >=55 && chem>=50 )
{
 printf("Eligible in Marks Criteria for Subject \n");
		
	if( (maths+phy)>=140)
	{
 	  printf("Eligible in Maths and physics Group 140 \n");
		if((maths+chem+phy)>=190)
		{
		  printf("Eligible in Maths, Chem and physics Group 190 \n");
		}
		else
		{
		 printf("Not Eligible in Maths, chem and physics Group 190 \n");
		}
	}
	else
	{
	  printf("Not Eligible in Maths and physics 140 \n");
	}
}
else
{
  printf("Not Eligible in Marks Criteria for Subject \n");
}

return 0;
}
