#include <stdio.h>

int main()
{
	int N = 5, i = 1;
    printf("enter the no :");
    scanf("%d",&N);
	
	do
	{
		printf("%dx%d = %d\n", N, i, N * i);
	} while (i++ < 10);

	return 0;
}