#include <stdio.h>
int main()
{
    int n[6], i, flag = 0, s;
    printf("Enter the array numbers :");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("Enter a number :");
    scanf("%d", &s);
    for (i = 0; i < 6; i++)
    {
        if (s == n[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is  present at location %d", s, i + 1);
    }
    if (flag == 0)
    {
        printf("Number is not present");
    }
    return 0;
}
  











