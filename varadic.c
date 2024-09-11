#include <stdio.h>
#include <windows.h>

int main()
{
    printf("\n\n\n");
    for (int i = 60; i >= 1; i--)
    {
        printf("you have only %d sec. ans in this time", i);
        Sleep(1500);
        printf("\r                                        \r");
    }
    printf("your time is over");

    return 0;
}
