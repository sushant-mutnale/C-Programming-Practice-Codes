#include <stdio.h>
#include <string.h>

int main()
{
    //     int num1 = 0, num2, num3, largest;
    //     char s[20];
    //     // printf("Enter three numbers: ");
    //     // scanf("%d %d %d", &num1, &num2, &num3);
    //     printf("eneter the string :");
    //     gets(s);
    //     for (int i = 0; s[i] != '\0'; i++)
    //     {
    //         num1++;
    //     }
    //     printf("%d :",num1);
    // int n;
    // printf("enter the array element :");
    // scanf("%d", &n);
    // printf("enter array element :");
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    char s[20], s1[20];

    int num1, i;
    printf("eneter the 1st string :");
    gets(s);
    printf("eneter the 2nd string :");
    gets(s1);
    for (i = 0; s[i] != '\0'; i++)
    {
        s1[i] = s[i];
    }
    s1[i] = '\0';
    printf("  the 2nd string is :");
    puts(s1);
    return 0;
}