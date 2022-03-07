#include <stdio.h>
#include <string.h>

// write a c program to check whther the string is palyndrome or not.

int main()
{
   char text[20], reverse_text[20];
   int i,n, length = 0;

   printf("Enter text: ");
   scanf("%s", text);

   for (i = 0; text[i] != '\0'; i++)
   {
      length++; //this will calculate the length of given text
   }
   //Reverse the original text and store into reverse_text
   for (i = length - 1; i >= 0; i--)
   {
      reverse_text[length - i - 1] = text[i];
   }

   //Check whether reverse_text is same to original text
   for (n = 1, i = 0; i < length; i++)
   {
      if (reverse_text[i] != text[i])
      n = 0;
   }

   if (n == 1)
      printf("%s is a palindrome.\n", text);
   else
      printf("%s is not a palindrome\n", text);

   return 0;
}