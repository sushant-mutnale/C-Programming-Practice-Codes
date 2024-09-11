#include <stdio.h>
#include <string.h>
int main()
{

    char str[] = "Hello, World!";
    char *token = strtok(str, " ,!"); // Tokenizes based on space, comma, and exclamation
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ,!");
    }
}
