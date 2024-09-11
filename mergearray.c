#include <stdio.h>
int main()
{
  int n1, n2, k, j, i;
  printf("Enter the size of first array  : ");
  scanf("%d", &n1);
  int a[n1 + n1];
  printf("Enter %d elements in  array  : ", n1);
  for (i = 0; i < n1; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the size of second array  : ");
  scanf("%d", &n2);

  printf("Enter %d elements in  array  : ", n2);
  for (i = n1; i < n1+n2; i++)
  {
    scanf("%d", &a[i]);
  }


  int l = n1 + n2;

  for (i = 0; i < l - 1; i++)
  {
    int small = a[l - 1];
    for (j = l - 1; j >= i; j--)
    {
      if (a[j] < a[j - 1])
      {
        int t;
        t = a[j];
        a[j] = a[j - 1];
        a[j - 1] = t;
      }
    }
  }
  printf("the merged array element in deccending order:\n");
  for (i = l-1; i >=0; i--)
  {
    printf("%d ", a[i]);
  }
}