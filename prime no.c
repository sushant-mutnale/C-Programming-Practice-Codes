#include<stdio.h>
int main()
{
    int n,k;
    printf("ENTER ANY NO :");
    scanf("%d",&n);
    if(n==0||n==1){
	printf("%d is neither prime nor composite no",n);
	}
	else{
    int i=2;
    while(i<n){
    	if(n%i==0){ 
    		k=1;
}
		i++;
}
		if(k==1){
			printf("%d is composite no",n);
		}
		else{
			printf("%d is prime no",n);
		}
  }
		return 0;
}

