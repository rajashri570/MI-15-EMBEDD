#include <stdio.h>
#include<string.h>
union student
{
   //defining a union
   char name[32];
   float percentage;
   int std_id;
};


int main()
{
  
  union student record;
  strcpy(record.name, "Anil");
  printf("record.name : %s\n",record.name);
  record.percentage=72.3;
  printf("record.precentage : %f\n",record.percentage);
  record.std_id=01;
  printf("record.std_id : %d\n", record.std_id);
}

