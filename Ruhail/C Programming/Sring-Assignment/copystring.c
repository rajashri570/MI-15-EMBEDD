#include<stdio.h>
// 2. write a program to copy string without using library function

int main()
{
    char str[100],copy_str[100];
    int i;
    
    scanf("%s",str);
    
    /*
     * Let's assume string as "abc"
     */
     
    for(i = 0; str[i] != '\0'; i++)
          copy_str[i] = str[i];
    
    /*
     * i = 0; copy_str[0] = str[0] i.e. 'a'
     * i = 1; copy_str[1] = str[1] i.e. 'b'
     * i = 2; copy_str[2] = str[2] i.e. 'c'
     * i = 3; str[i] == '\0'. It will come out of loop
     */
     
    copy_str[i] = '\0';
    // i = 3; copy_str[3] = '\0';
    
    printf("Copied string = %s",copy_str);
    
    return 0;
}