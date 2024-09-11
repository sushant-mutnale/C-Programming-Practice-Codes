#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char concatStr[100];
    int len;

    // String copy
    strcpy(concatStr, str1);
    printf("Copied string: %s\n", concatStr);

    // String concatenation
    strcat(concatStr, " ");
    strcat(concatStr, str2);
    printf("Concatenated string: %s\n", concatStr);

    // String length
    len = strlen(concatStr);
    printf("Length of concatenated string: %d\n", len);

    // String comparison
    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    // String searching
    char *ptr = strstr(concatStr, "World");
    if (ptr != NULL)
    {
        printf("Found 'World' in the concatenated string at position: %ld\n", ptr - concatStr);
    }
    else
    {
        printf("'World' not found in the concatenated string\n");
    }

    return 0;
}
