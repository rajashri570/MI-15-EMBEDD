#include <stdio.h>
#include <stdlib.h>
int main()
{   
// Q3.C Program to Delete a specific Line from a Text File.

   FILE* ptr1;  //ptr1 pointer for file1
   FILE* ptr2;  //ptr2 pointer for file2

   char ch;                     //character variable
   int line = 0, tmp = 1;

   ptr1 = fopen("file1.txt", "r");
   if (ptr1 == NULL)
   {
       printf("Error...file not found!");
       exit(1);
   }
    while ((ch = fgetc(ptr1)) != EOF)
    {
        printf("%c", ch);   
    }
    
    rewind(ptr1);   //set pointer to the beginning of the file

    printf("\nEnter Linw Number which you want to delete : ");
    scanf("%d", &line);

    ptr2 = fopen("file2.txt", "w");

    while ((ch = fgetc(ptr1)) != EOF)
    {
      
        if (ch == '\n')
        
            tmp++;
        
        if (tmp != line)
        
            putc(ch, ptr2);
        
    }
        fclose(ptr1);   //close file1
        fclose(ptr2);   //close file2

        remove("file1.txt");                    
        rename("file2.txt", "file1.txt");      //the function used to chenge the name of file or directory...

        printf("\nModified file is :\n");

        ptr1 = fopen("file1.txt", "r");

        if (ptr1 == NULL)
        {
            printf("Error...File not found!");
            exit(1);                            
        }

        while ((ch = fgetc(ptr1)) != EOF)
        {   
            printf("%c", ch);
        }
        fclose(ptr1);

    printf("\n");
}