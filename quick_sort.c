#include <stdio.h>
void printarr(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("%d  ", arr[i]);
    }
}
int partition(int arr[], int pivot, int high)
{
    int i = pivot + 1;
    int j = high;
    do
    {
        while (arr[pivot] >= arr[i])
        {
            i++;
        }

        while (arr[pivot] < arr[j])
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);
    int temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;
    return j;
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}
int main()
{
    int i, a, sum = 0;
    printf("Eneter the array limit: ");
    scanf("%d", &a);
    int arr[a];
    printf("enter the %d array elements: \n", a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printarr(arr, a);
    quicksort(arr, 0, a - 1);
    printf("\n THE SORTED ARRAY IS \n");
    printarr(arr, a);
}