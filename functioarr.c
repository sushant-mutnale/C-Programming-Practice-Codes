#include <stdio.h>
int func(int arr[], int s, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s == arr[i])

        {
            return i + 1;
        }
    }
}
int main()
{
    int arr[10], n, s;
    printf("enter the no of element :");
    scanf("%d", &n);
    printf("enter searching  element :");
    scanf("%d", &s);
    printf("enter the array element :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d element is present at at %d posi", s, func(arr, s, n));
    return 0;
}