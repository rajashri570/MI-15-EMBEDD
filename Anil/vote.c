#include <stdio.h>
void main()
{
  int vote_age;

  printf("Input the age of the candidate : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf(" not eligible to caste your vote.\n");
    
     }
  else
     printf("eligible for casting your vote.\n");
}