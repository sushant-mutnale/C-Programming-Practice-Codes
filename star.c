#include <stdio.h>
int main()
{
    int n,i,j,s;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=n-i;s>=1;s--)
        {
            printf(" ");
        }
    for(j=1;j<=i;j++)
    {
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}