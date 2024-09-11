// #include <stdio.h>
// int main()
// {
//     int n, k, count = 0;
//     printf("enter  the no of element in array :");
//     scanf("%d", &n);
//     int arr[n];
//     printf("enter  the  %d element  :", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the the value of addition :");
//     scanf("%d", &k);
//     for (int i = 0; i < n - 1 && n != 0; i++)
//     {
//         for (int j = i + 1; j < n && n != 0; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 printf("REMOVE NO. %d AND %d \t", arr[i], arr[j]);
//                 int k = i;
//                 while (k < n - 2)
//                 {
//                     if (k < j - 1)
//                     {
//                         arr[k] = arr[k + 1];
//                         k++;
//                     }
//                     else
//                     {
//                         arr[k] = arr[k + 2];
//                         k++;
//                     }
//                 }
//                 n = n - 2;

//                 j = j - 3;
//                 count++;
//                 printf(",then nums are :   ");
//                 for (int l = 0; l < n; l++)
//                 {
//                     printf("%d  ", arr[l]);
//                 }
//                 printf("\n");
//             }
//         }
//     }
//     printf("\nthe no of operation are:%d", count);

//     return 0;
// }
#include <stdio.h>
int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);
    for (int j = low; j <= high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    return (i + 1);
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int maxOperation(int a[], int n, int target)
{
    int i = 0, j = n - 1, maxOp = 0;
    while (i < j)
    {
        int sum = a[i] + a[j];
        if (sum < target)
        {
            i++;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            maxOp++;
            i++;
            j--;
        }
    }
    return maxOp;
}
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("enter %d elements in array ", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }
    int target;
    printf("Enter target sum : ");
    scanf("%d", &target);

    quickSort(a, 0, n - 1);
    printf("Number of operations :  %d", maxOperation(a, n, target));

    return 0;
}