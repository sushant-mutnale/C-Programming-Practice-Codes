#include <stdio.h>
void insert(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int k;
        k = arr[i];
        if (arr[i] < 0)
        {
            k = arr[i];
            int j = i;
            while (j != n - 1 && arr[j + 1] > 0)
            {

                arr[j] = arr[j + 1];

                j++;
            }
            arr[j] = k;
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
    insert(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}