#include<stdio.h>
int factorial(int number){
	if(number == 1 || number == 0){
		return 1;
	}
	else{
		return (number*factorial(number-1));
	}
}
int main()
{ int n;
	printf("enter any no..");
	scanf("%d",&n);
	printf("the factorial of %d is :%d",n,factorial(n));
return 0;
}
