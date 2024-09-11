#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, r, digit = 0, sum = 0;
    printf("eneter any digit : ");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        digit++;
        i = i / 10;
    }
    i = n;
    while (i != 0)
    {
        r = i % 10;
        sum = sum + pow(r, digit);
        i = i / 10;
    }
    if (sum == n)
    {
        printf("number is armstong");
    }
    else
    {
        printf("number is not armstong");
    }
}
