#include <stdio.h>
int main()
{
    int i, a, sum = 0;
    printf("Eneter the array limit: ");
    scanf("%d", &a);
    int arr[a];
    printf("enter the %d array elements: \n", a);
    for (i = 0; i < a; i++)
    {
        printf("element %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum of array element is: %d", sum);
}