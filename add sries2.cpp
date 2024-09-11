#include<stdio.h>
#include<math.h>
int main()
{
	int i,s=0,n,s1=0;
	printf("enter the no of series you want:");
	scanf("%d",&n);
	printf("the number of terms :%d\n",n);
	for(i=0;i<n;i++){
		s1=(s1+pow(10,i));
		printf("%d+",s1);
		s=s+s1;
	}
	printf("\nthe sum is:%d",s);
}
