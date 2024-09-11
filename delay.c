
#include <stdio.h>
#include <windows.h>

int main()
{
    char line[] = "Hello, World!";
    int i = 0;

    while (line[i] != '\0')
    {
        printf("%c", line[i]);
        fflush(stdout);
        Sleep(500);
        i++;
    }

    printf("\n");
}
