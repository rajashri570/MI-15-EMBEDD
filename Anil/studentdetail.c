//check student is eligible or not for admission by using following data.
#include <stdio.h>
void main()
{  int p,c,m,t,mp;

   printf("Eligibility Criteria :\n");
   printf("Marks in Maths >=65\n");
   printf("and Marks in Phy >=55\n");
   printf("and Marks in Chem>=50\n");
   printf("and Total in all three subject >=190\n");
   printf("or Total in Maths and Physics >=140\n");
   printf("-------------------------------------\n");

   printf("Input the marks obtained in Physics :");
   scanf("%d",&p);
   printf("Input the marks obtained in Chemistry :");
   scanf("%d",&c);
   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&m);
   printf("Total marks of Maths, Physics and Chemistry : %d\n",m+p+c);
   printf("Total marks of Maths and  Physics : %d\n",m+p);

   if (m>=65)
         if(p>=55)
             if(c>=50)
	        if((m+p+c)>=190||(m+p)>=140)
	           printf("The  candidate is eligible for admission.\n");
	        else
	          printf("The candidate is not eligible.\n");
             else
	    printf("The candidate is not eligible.\n");
         else
	   printf("The candidate is not eligible.\n");
    else
     printf("The candidate is not eligible.\n");
}
