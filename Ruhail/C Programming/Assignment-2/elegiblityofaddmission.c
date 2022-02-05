/*4. Write a C program to find the eligibility of admission for a professional course based on the following criteria: 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140
*/

#include <stdio.h>
int main()
{
    int maths, phys, chems, total1, total2; 

    printf("Enter The Marks obtained in Mathematics : ");
    scanf("%d", &maths);

    printf("Enter The Marks obtained in Physics : ");
    scanf("%d", &phys);

    printf("Enter The Marks obtained in Chemistry : ");
    scanf("%d", &chems);

    total1 = maths + phys + chems;
    total2 = maths + phys;

    printf("Total marks of Maths, Physics and Chemistry :%d", total1);
    printf("\nMarks of Physics and Chemistry is : %d", total2);

    if (maths >= 65 && phys >= 55 &&  chems >= 50 && (maths+phys+chems) >= 190)
    {
        printf("\nThe Condidate is Eligible for Addmission \n");
    }
    else if (maths + phys >= 140)
    {
        printf("\nThe Candidate is Eligible for Addmission \n");
    }

    else
    {
        printf("\nThe Candidate is not Eligible for Addmission \n");  
    }
}