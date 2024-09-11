// #include <stdio.h>

// int main()
// {
//     int a, c;

//     printf("ENTER THE NO ELEMENTS IN ARRAY :");
//     scanf("%d", &a);
//     int arr[a], arr1[10];
//     printf("ENTER THE %d ELEMENTS IN ARRAY :", a);
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("ENTER THE NO OF ELEMENTS IN SUBBARRY :");
//     scanf("%d", &c);
//     int j = 0;
//     float max = 0, max1;
//     for (int k = 0; k < c; k++)
//     {
//         max = max + arr[k];
//     }

//     max1 = max;

//     for (int f = 0; f < c; f++)
//     {
//         arr1[f] = arr[f];
//     }
//     for (int i = c; i < a; i++)
//     {
//         max1 = max1 + arr[i] - arr[j];
//         if (max1 > max)
//         {
//             int o = 0;
//             for (int f = j + 1; f < i + 1; f++)
//             {
//                 arr1[o] = arr[f];
//                 o++;
//             }
//             max = max1;
//         }
//         j++;
//     }
//     float ave = max / c;

//     printf("\n\n maximum average is ");
//     printf("[ ");
//     for (int i = 0; i < c; i++)
//     {
//         printf("%d ", arr1[i]);
//     }
//     printf("] / %d = %.2f / %d = %.2f ", c, max, c, ave);
// }
#include <stdio.h>

double maxAvg(int a[], int sub, int len)
{
    int sum = 0;
    for (int i = 0; i < sub; i++)
    {
        sum += a[i];
    }
    double maxSum = sum;
    for (int i = sub; i < len; i++)
    {
        sum += a[i] - a[i - sub];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    return (maxSum / sub);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements in to array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sub;
    printf("Enter the size of subarray : ");
    scanf("%d", &sub);
    printf("Max average : %f", maxAvg(a, sub, n));
}