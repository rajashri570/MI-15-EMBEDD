#include <stdio.h>
int main()
{
    char string1[100], string2[100],i;        
    printf("Enter string string1 :\n");     
    fgets(string1, 100, stdin);           
    for(i = 0; string1[i] != '\0'; ++i)  
    {
        string2[i] = string1[i];
    }
    string2[i] = '\0';                
    printf("String string2 : %s", string2);
    return 0;
}
