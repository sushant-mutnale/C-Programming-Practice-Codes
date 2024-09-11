#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, a[40], i, j, k , l;
    a[0] = 1;
    printf("enetr the no of row you want to print :");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
    for(k=n1-i;k>0;k--)
    {
    	printf("   ");
	}
	if(i==0)
	{
		printf("  1  ");
	}
	else
	{
    n2 = pow(11, i);
    for (j = n2; j != 0; j = j / 10)
    {
    	printf("  %d  ",j%10);
      
        
    }
	}
    printf("\n");
    }

}