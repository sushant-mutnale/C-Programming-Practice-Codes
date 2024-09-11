#include <stdio.h>
#include <string.h>
int pallindrom(char s[], int i, int j)
{

    while (i <= j)
    {
        if (i == j)
        {
            return 1;
        }
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    int n, i, j, c = 0, i1 = 0, j1 = 0;
    char s[30], s1[20];
    printf("eneter the string :");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i; s[j] != '\0'; j++)
        {
            c = pallindrom(s, i, j);
            if (c != 0)
            {
                if ((j1 - i1) < (j - i))
                {
                    i1 = i;
                    j1 = j;
                }
            }
        }
    }
    printf("LPS :");
    for (i = i1; i <= j1; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}