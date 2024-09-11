#include<stdio.h>
int main()
{
  int n1;
	printf("enter which exam you passed (for sci and math=1,sci=2,math=3)");
	scanf("%d",&n1);
	if(n1=1){
		printf("\n\t\tyou won 45 rs gift");
	}
	else if(n1=2){
		printf("\n\t\tyou passed maths sou you won 10 rs gift");
	}
	else{
		printf("\n\t\tyou passed science so you won 10 rs gift");
	}
}
