#include <stdio.h>
#include<windows.h>
int main() 
{
  int i,j,n;
  printf("Enter the number:");
  scanf("%d",&n);

  for(i=n;i>=1;i--) {
    for(j=n;j>=1;j--) {
      if(j>=i)
        printf("*");
      else
        printf(" ");
        Sleep(10);
    }
    for(j=1;j<=n;j++) {
      if(j>=i)
        printf("*");
      else
        printf(" ");
        Sleep(10);
    }
    printf("\n");
  }

//2nd step
  for(i=1;i<=n;i++) {
    for(j=n;j>=1;j--) {
      if(j>=i)
        printf("*");
      else
        printf(" ");
        Sleep(10);
    }
    for(j=1;j<=n;j++) {
      if(j>=i)
        printf("*");
      else
        printf(" ");
    Sleep(10);
	}
    printf("\n");
  }
}