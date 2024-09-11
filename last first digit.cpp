#include<stdio.h>
#include<math.h>
int main()
{int i,n,first,last,d;
	printf ("enter any no:");
	scanf("%d",&n);
	

d=log10(n);
printf("%d\n",d);
first=n/pow(10,d);
last=n%10; 
printf("first nad last is %d and %d\n",first,last);
printf("the sum of first and last digit of no %d is: %d",n,last+first);

}
