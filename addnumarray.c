#include <stdio.h>
int main()
{
    int n, t, flag = 0, i1, j1;
    printf("ENTEr NO THE ELEMENT IN ARRAY :");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENT IN ARRAY :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE TARGET :");
    scanf("%d", &t);
    int i = 0, j = n - 1;
    while (i <= j)
    {
        int t1 = arr[i] + arr[j];
        if (t1 == t)
        {
            flag = 1;
            i1 = i;
            j1 = j;
            goto end;
        }
        else
        {
            if (t1 < t)
            {
                if ((arr[i + 1] + arr[j] > arr[i] + arr[j - 1]) && (arr[i + 1] + arr[j] <= t))
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }

            else
            {
                if ((arr[i + 1] + arr[j] > arr[i] + arr[j - 1]) && (arr[i] + arr[j - 1] >= t))
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
        }
    }
end:
    if (flag == 1)
    {
        printf("%d IS ADDITION OF [%d,%d] INDEX N0", t, i1, j1);
    }
    else
    {
        printf("THE TARGET IS NOT FOUND....");
    }

    return 0;
}