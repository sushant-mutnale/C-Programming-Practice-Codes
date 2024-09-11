#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **arr, ans, a;

    printf("enter the row and column want:");
    scanf("%d", &ans);
    arr = (int **)malloc(ans * sizeof(int *));
    // for (size_t i = 0; i < count; i++)
    // {
    //      *(arr + i) = (int *)realloc((arr), sizeof(int) * 1);
    // }
    
    for (int i = 0; i < ans; i++)
    {
          arr[i] = (int *)malloc(sizeof(int)*ans);
        for (int j = 0; j < ans; j++)
        {

            printf("enater the value for position [%d,%d]", i, j);
            scanf("%d", &a);
            *(*(arr + i) + j) = a;
           printf("\n");
        }
    }
    for (int i = 0; i < ans; i++)
    {
        for (int j = 0; j < ans; j++)
        {
            printf("the value at  position [%d,%d]is :%d\n", i,j,*(*(arr + i) + j));
        }
    }
    free(arr);

    return 0;
}