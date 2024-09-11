#include <stdio.h>

#include <windows.h>

int main()
{

    int i, j;
    for (i = 0; i < 10; i++)
    {

        printf("\n\t\t\t");
        for (j = 0; j < 9; j++)
        {

            if ((i == 0 && (j == 0 || j == 1 || j == 3 || j == 4 || j == 5 || j == 7 || j == 8)) || (i == 1 && j == 4) || (i == 1 && (j == 0 || j == 8)) || (i == 7 && (j == 0 || j == 1 || j == 7 || j == 8)) || (i == 6 && (j == 0 || j == 8)) || (i == 8 && (j > 5 || j < 3) || (i == 9 && j != 4)))
                printf("  ");
            else
            {
                printf(" *");
            }
            Sleep(30);
        }

        Sleep(500);
    }

    return 0;
}
