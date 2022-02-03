//1. Write a C program to check whether a given number is even or odd.

#include<stdio.h>

int  EvenOdd(int ino)
{

if(ino%2==0)
  {
  	printf("Even\n");
  }
  else 
  {
  	printf("Odd\n");
  }
return 0;
}

int main()
{
int x=10;
  EvenOdd(x);	
  
return 0;
}
