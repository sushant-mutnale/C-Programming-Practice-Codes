#include<stdio.h>
int maiin()
{char ch;
int n1, n2;
printf("enter any two no.:");
scanf("%d%d",&n1,&n2);
printf("'a':addition");
printf("'s':sub");
printf("'m':multi\n\t\t");
printf("enter your choice :");
scanf("%c",&ch);
switch('a')
{
	case 'a':
		printf("addition of %d & %d is:%d",n1,n2,n1+n2);
	default:
		;
}
}
