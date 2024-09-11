#include <stdio.h>
int main()
{
    int arr[15], i, j, a, b, n, great1 = 0, great2 = 0;
    printf("enter size of the array:");
    scanf("%d", &n);
    printf("enter the %d array element :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        great1 = 0;
        for (j = i; j < n - 1; j++)
        {
            great1 = great1 + arr[j];
            if (great1 > great2)
            {
                great2 = great1;
                a = i;
                b = j;
            }
        }
    }
    printf("the largest sum of contiguous subarray is : %d\n  ", great2);
    printf("the sum is calculated of subarray from the index  %d to  %d", a, b);
}