#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY :");
    scanf("%d", &n);
    int candi[n], i, m, result;
    printf("ENTER THE CANDIES :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &candi[i]);
    }
    printf("THE CANDIES ARE :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", candi[i]);
    }
    printf("ENTER THE EXTRACANDIES : ");
    scanf("%d", &m);

    result = candi[0] + m;
    for (i = 0; i < n; i++)
    {
        if (candi[i] + m >= result)
        {
            printf("true ");
            result = candi[i] + m;
        }
        else
        {
            printf("flase ");
            result = candi[i] + m;

        }
    }
}