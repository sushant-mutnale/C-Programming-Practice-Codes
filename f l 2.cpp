#include<stdio.h>
#include<math.h>
int main()
{int i,n,first,last,d=0;
	printf ("enter any no:");
	scanf("%d",&n);
	if(n<10){
		first=0;
		last=n%10;
		printf("the sum of first and last is:%d",first+last);
	}
	else{
	
	if(n<10){
		first=0;
		last=n%10;
		printf("the sum of first and last digit is:%d",first+last);
	}
	else{
	
	for(i=n;i!=0;i=i/10)
	{
		d++;
	}
	printf("%d\n",d);
	int last;
	int first;
	last=n%10;
	first=n/pow(10,d-1);
	printf("the sum of first and last digit of no %d is:%d",n,last+first);
}
}
}
