#include<stdio.h>
int main()
{
	int a,b,i,j,s;
	printf("ENTER FIRST NO :");
	scanf("%d",&a);
	printf("ENTER SECOND NO :");
	scanf("%d",&b);
	i=1;
	while(1)
	{
		s=i*a;
		if(s%b==0)
		{
			printf("LCM IS :%d",s);
			break;
		}
		else 
		i++;
	}

	sys:
		return 0;
}
