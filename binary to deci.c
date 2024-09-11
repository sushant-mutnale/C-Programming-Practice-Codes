#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n,i,j,p,s=0,k=1,d=0,s1=0;
	float m,s2;
	
	printf("ENETR ANY BINARY NUMBER :");
	scanf("%d.%d",&n,&n1);
	
	printf("%d\n",n);
	printf("%d\n",n1);

	for(i=n;i!=0;i=i/10)
		{
			
			p=i%10;
			if(p==1)
			{
				s=s+k;
			}
		k=k*2;
		}
		
		j=n1;
		while(j!=0)
		{
			d++;
			j=j/10;
		}
		j=n1,m=d;
		while(j!=0)
		{
		 	p=j%10;
			 if(p=1)
			 {
              	s1=s1+pow(2,-(m));
			 }	
			 m--;
		}
		
	s2=s1+s2;	
	printf("THE DECIMAL NO OF GIVEN BINARY NO IS :%f",s2);
	
	return 0;
}
