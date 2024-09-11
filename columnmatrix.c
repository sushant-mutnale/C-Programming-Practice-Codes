#include <stdio.h>
int main()
{
    int c1, c2 = 0, j1, n;
    printf("ENTER THE ROW AND COLUMN TOU WANT :");
    scanf("%d", &n);
    int arr[n][n];
    printf("ENTER THE %d MATRIX ELEMENT (only '0'or'1') :", n * n);
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == 0)
            {
                c1++;
            }
        }
        if (c1 > c2)
        {
            c2 = c1;
            j1 = j;
        }
    }
    if (c2 != 0)
    {
        printf("%d column having  %d 0`s which is maximum along the all column ", j1 + 1, c2);
    }

    else
    {
        printf("THE MATRIX DOES NOT CONSIST ANY ZERO ......");
    }

    return 0;
}