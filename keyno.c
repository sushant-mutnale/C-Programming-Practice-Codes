#include <stdio.h>
int main()
{
    int n, i, flag = 0, j = 1, c = 0;
    printf("no of key to be prssed :");
    scanf("%d", &n);
    for (i = 0; i < n;)
    {
        if (flag == 0)
        {
            if (i + 3 <= 2 * i && i + 3 <= n)
            {
                i = i + 3;
                j = c;
                c = c + j;
                flag = 1;
                for (int k = 2; k < 5; k++)
                {
                    printf("key %d,", k);
                }
            }
            else
            {
                i++;
                c++;
                printf("key %d,", 1);
            }
        }
        else
        {
            if (3 * j <= 2 * c && i + 3 <= n)
            {
                i = i + 3;
                j = c * 2;
                c = c + j;
                for (int k = 2; k < 5; k++)
                {
                    printf("key %d,", k);
                }
            }
            else
            {
                c = c + j;
                i++;
                printf("key %d,", 4);
            }
        }
    }
    printf("%d", c);

    return 0;
}
