#include<stdio.h>
int main()
{
    int num, fNum=0, sNum=1, sum=0;
    
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("%d\n%d\n",fNum,sNum);

    for(int i=2; i<num; i++)
    {
        sum = fNum + sNum;
        printf("%d\n",sum);
        fNum = sNum;
        sNum = sum;
    }

    return 0;

}