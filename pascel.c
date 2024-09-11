#include <stdio.h>
int fact(int n)
{
    int i;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int ele = 1;
        for (i = n; i > 0; i--)
        {

            ele = ele * i;
        }
        return ele;
    }
}
int element(int i, int j)
{
    int n;
    n = fact(i) / (fact(j) * fact(i - j));
    return n;
}
int main()
{
    int n, l, k, s;
    float i, j;
    printf("enter the number of rows :");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (k = 0; k < n - i; k++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {

            printf("%d   ", element(i, j));
        }
        printf("\n");
    }
    return 0;
}
