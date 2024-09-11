#include <stdio.h>
void insert(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int k;
        k = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > k)
        {

            arr[j + 1] = arr[j];

            j--;
        }
        arr[j + 1] = k;
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