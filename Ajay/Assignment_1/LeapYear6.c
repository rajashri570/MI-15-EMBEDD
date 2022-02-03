#include<stdio.h>


int main()
{
  int year=1996;
  
  if(year%400==0)
  {
  	 printf("Leap Year %d:",year);
  }
  else if(year%400==0)
  {
  	 printf("Not Leap Year %d:",year); 
  }
  else if(year%4==0)
  {
  	 printf("Leap Year %d:",year);
  }
  
  else
  {
     printf("Not Leap Year");
  }
  	
   
}

