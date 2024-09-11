#include <stdio.h>
int main()
{
    int n1;
    printf("enter the row :");
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= 2 * n1; j++)
        {
            if ((j > i && j <= 2 * n1 - i))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n\n");
    }
    for (int i = n1; i > 0; i--)
    {
        for (int j = 1; j <= 2 * n1; j++)
        {
            if ((j > i && j <= 2 * n1 - i))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n\n");
    }

    return 0;
}