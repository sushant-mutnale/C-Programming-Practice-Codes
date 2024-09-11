#include<stdio.h>
/*int main()
{
	int i=3,*j;
	j=&i;
	printf("the value of i is=%u",i);
	printf("the value of i is=%u",*&i);
	printf("the value of i is=%u",*j);
	printf("the adress of i is=%u"),&i;
	printf("the adress of i is=%u",j
	);
}*/
void swap(int,int)
void main()


{
	int a=10;b=20;
	swap(a,b);
	printf("a=%d,b=%d",a,b);
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("x=%d,y=%d",x,y);
	
}
