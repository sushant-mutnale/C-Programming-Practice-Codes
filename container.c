#include <stdio.h>
#include <math.h>
int max(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    return b;
}

int min(int a, int b)
{
    if (a <= b)
    {
        return a;
    }
    return b;
}
int main()
{
    int n;
    printf("Enter the length : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the height of %d column : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int totalWater = 0;
    if (n < 3)
    {
        totalWater = 0;
    }
    else
    {
        int k = 1;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            int temp = min(a[i], a[j]) * (n - k);
            if (temp > totalWater)
            {
                totalWater = temp;
            }
            if (a[i] < a[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            k++;
        }
    }
    printf("Total trapped water is : %d", totalWater);
}
