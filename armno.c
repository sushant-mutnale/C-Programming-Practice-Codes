#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char arr[1000];
    int i, count = 0, ary[] = {0};

    gets(arr);
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 48 && arr[i] < 58)
        {
            int n = (int)(arr[i]);
            printf("%d ", n);
            ary[n] = ary[n] + 1;
        }
    }
    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d ", ary[i]);
    // }
    return 0;
}