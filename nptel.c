// #include<stdio.h>
// int f(int n,int k){
//   if (n==0)
//   {
//     return 0; 
//   }
//   else if (n%2)
//   {
//     return f(n/2,2*k)+k;

//   }
//   else{
//     return f(n/2,2*k)-k;
//   }
  
  
// }
// int main()
// {
//  printf("%d",f(20,1));
// return 0;
// }
#include<stdio.h>
int fun(int x){
  if (x>100)
  {
    return x-10;
  }
  else
  return fun(fun(x+11));

}
int main()
{
 printf("%d",fun(95));
return 0;
}