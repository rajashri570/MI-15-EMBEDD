#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;

    char str;
    int size;

    // char *arr = "info.txt"; 

    ptr = fopen("info.txt", "r");

    if (ptr == NULL)
    {
        printf("Error...File not Found");
        exit(1);
    }
    else
    {
        printf("File is Found\n");
    }

    fseek(ptr, 0, SEEK_END);

    size = ftell(ptr);

    printf("\nFile size is : %d\n", size);

    fclose(ptr);
    
}