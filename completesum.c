#include <stdio.h>
int main()
{
    int n, s, sum = 0;
    printf("ENTER THE NO ELEMENT IN ARRAY :\n");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE  ELEMENT IN ARRAY :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE INDEX UP TO COMPLETE SUM YOU WANT :\n");
    scanf("%d", &s);
    int array[s];
    for (int i = 0; i < s; i++)
    {
        sum = sum + arr[i];
        array[i] = sum;
    }
    printf("OUTPUT :\n");
    for (int i = 0; i < s; i++)
    {
        printf(" %d ", array[i]);
    }

    return 0;
}