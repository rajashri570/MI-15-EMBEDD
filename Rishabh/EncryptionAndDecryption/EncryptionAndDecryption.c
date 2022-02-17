#include <stdio.h>

int main()
{
    int i, x;
    char str[100];

    printf("\nPlease enter a string:\t");
    gets(str);

    printf("\n\n================Encrypt the string.===========================\n\n");

    for (i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3;

    printf("\nEncrypted string: %s\n", str);

    printf("\n\n==================Decrypt the string.===========================\n\n");
    for (i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3;

    printf("\nDecrypted string: %s\n", str);
}