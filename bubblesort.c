#include <stdio.h>
void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main()
{
    int n, arr[10];
    printf("enter the no of elemet :");
    scanf("%d", &n);
    printf("enter the array elemet :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}