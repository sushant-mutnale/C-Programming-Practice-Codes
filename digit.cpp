#include<stdio.h>
int main()
{
	int n1,n2,i,a,d=0;
	printf("entyer the no:");
	scanf("%d",&n1);
	printf("enter the digit:");
	scanf("%d",&n2);
while(i>0)
	{
		a=i%10;
		if(a==n2){
			d++;
	
	 
	  }
		i=i/10;
	}
	printf("the %d is %d times present in the %d ",n2,d,n1);
}/*

#include<stdio.h>

int main() {

    int n; 
    int d,i;

    int count=0; 
printf("enter the no and digit");
scanf("%d%d",&n,&d);
i=n;
    while(i>0) {

        int rem = i%10; 
        if(rem == d){
            count++;
        }
        i=i/10; 
    }

    printf("%d",count);

    return 0;
}
*/

