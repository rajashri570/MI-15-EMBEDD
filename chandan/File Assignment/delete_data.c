//C Program to Delete a specific Line from a Text File.

#include<stdio.h>
void main()
{
    FILE *fp1 , *fp2;
    char file1="abc1.txt";
    char file2="abc2.txt";
    char ch;

    int del,line_num=0;
    printf("Please enter the line no that you want to delete ");
    scanf("%d",&del);
    fp1=fopen("abc1.txt","r");
    fp2=fopen("abc2.txt","w");

    ch=getc(fp1);
    if(ch!=EOF){line_num=1;}

    while(1){
        if(del!=line_num)
        putc(ch,fp2);
        ch=getc(fp1);
        if(ch=='\n')line_num++;
        if(ch==EOF)break;
       
    }
    fclose(fp1);
    fclose(fp2);


}