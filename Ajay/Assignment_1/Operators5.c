#include<stdio.h>

void arithmatic(int ino1,int ino2)
{
	int add,mult,div,sub,mod;

	add=ino1+ino2;
	mult=ino1*ino2;	
	div=ino1/ino2;
	sub=ino1-ino2;
	mod=ino1%ino2;
	
	printf("Arithmatic Operator\n");
	printf("Add:%d\nMult:%d\nDiv:%d\nSub:%d\nMod:%d\n",add,mult,div,sub,mod);


}
void assignment(int ino1,int ino2)
{
	int add,mult,div,sub,mod;
	int temp=2,temp1=10,temp2=10;

	add+=temp;
	mult*=temp;
	div/=temp;
	sub-=temp;

	temp1<<=temp;
	temp2>>=temp;
	
	printf("\nAssignment Operator\n");
	printf("Add:%d\nMul:%d\nDiv:%d\nSub:%d\n\nLeft_Shift:%d \t Right_Shift:%d\n\n",add,mult,div,sub,temp1,temp2);

} 

void comparision();
{
	printf("Comparison operator\n\n");
	int x=10,y=10,z=11;

	if(x==y)
	{
  		printf("Comparison equals to operator\n");
 	}
	if(y!=z)
	{
  		printf("Comparision Not equals to Operator\n");
	}
}

int main()
{
int ino1=20;
int ino2=10;
int add,mult,div,sub,mod;

 arithmatic(ino1,ino2);
 assignment(ino1,ino2);
 comparison(); 
return 0;
}




