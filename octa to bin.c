#include <stdio.h>
int main()
{
    int n, i, j;
    printf("ENTER THE OCTAL NO:");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        int r;
        r = i % 10;
        j = r;
        while (j != 0)
        {
            int a;
            a = j % 2;
            printf("%d", a);
            j = j / 2;
        }
        i = i / 10;
    }

    return 0;
}