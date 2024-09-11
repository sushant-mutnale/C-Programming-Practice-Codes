#include<stdio.h>
int main()
{
	int n,n1;
	float km,foot,inches;
	printf(" -----conversion menu-------");
	printf("press:1 for convert km to miles\n");
	printf("press:2 for convert foot to inches\n");
	printf("press:3 for convert meter to foot\n");
	printf("press:4 for convert cm to feet\n");
	printf("press:5 for convert cm to inches\n");
	printf("enter your choice:");
	scanf("%d",&n);
	
	switch(n)
	{
		
		case 1:
	    		printf("enter km :");
				scanf("%f",&km);
				printf("the %.3f km is %.3f m",km,0.621*km); 
				printrf("enter 1 to cont and0 to stop ");
				scanf("%d",&n1);
				if(n1==1){
					goto*:int main()
				}
			
			
				
	    case 2:
				
	    		printf("enter foot :");
				scanf("%f",&foot);
				printf("the %f foot is %f inches",foot,12*foot);
		
		
	}
	
}








