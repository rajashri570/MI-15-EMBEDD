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

void comparision()
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
void logical()
{
int a = 5, b = 5, c = 10, result;

printf("\n\nLogical Operator\n\n");

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

   

}
int main()
{

int ino1=20;
int ino2=10;
int add,mult,div,sub,mod;

 arithmatic(ino1,ino2);
 assignment(ino1,ino2);
 comparision(); 
 
printf("Bitwise Operator\n\n");
int a=12;
int b=25;
printf("BitwiselAND = %d\n",a&b);
printf("BitwiseOR = %d\n",a|b);
printf("BitwiseXOR = %d\n",a^b);
printf("BitwiseComplement = %d\n\n",~a);
int i=0;
	for(i=0;i<=2;++i)
	{
	 printf("Bitwise ShiftRight = %d\n",a>>i);
	}
	printf("\n\n");
int j=0;
	for(j=0;j<=2;++j)
	{
	 printf("Bitwise ShiftLeft = %d\n",a<<j);
	}


logical();
return 0;
}
