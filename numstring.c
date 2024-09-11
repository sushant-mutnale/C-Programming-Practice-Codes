#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, a[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("ENTER THE STRING :");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {

        n = str[i];

        if (47 < n && n < 58)
        {
            a[n - 48] = a[n - 48] + 1;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}