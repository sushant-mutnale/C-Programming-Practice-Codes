#include <stdio.h>
#include <string.h>
int main()
{
    int f = 0, a = 0;
    char s[20], s1[20];

    printf("enter the string : ");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            s1[a] = s[i];
            a++;
        }
        else
        {
            if (s1[a - 1] == s[i] - 2 || s1[a - 1] == s[i] - 1)
            {
                a--;
            }
            else
            {
                f = 1;
            }
        }
    }

    if (f == 1)
    {
        printf("\nthe string is not true ...");
    }
    else
    {
        printf("\nthe string is  true ...");
    }

    return 0;
}