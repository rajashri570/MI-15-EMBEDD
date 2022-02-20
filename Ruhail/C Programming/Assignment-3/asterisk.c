#include <stdio.h>

//  Write a program in C to display the pattern like right angle triangle using an asterisk.

/* int main()
{   //right angle................
    int i, j, count;

    printf("Enter Number for create a Right Angle :");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
} */

//triangle......    
void main()  
{  
      
    int i, j, rows, k = 0;  
    printf (" Enter a number of rows to print Triangle: ");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= i; k++)  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
    }  
} 