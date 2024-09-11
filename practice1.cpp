#include<stdio.h>
int main()
{
	int  a,b;
	float per;
	printf("number of class held:");
	scanf("%d",a);
	printf("\number of class attended:");
	scanf("%d",b);
	per=(b/a)*100;
	printf("\n\t\tpercentage of attendence:%f",per);
	if(per>75){
		printf("you are allowed to sit in exam");
    }
    else{
    	printf("you are not allowed to sit to exam");
	}
	return 0;
	
}
