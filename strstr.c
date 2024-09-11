#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[30];

    printf("ENTER HAYSTACK STING : ");
    gets(str1);
    printf("ENTER NEEDLE STRING: ");
    gets(str2);
    char *str3 = strstr(str1, str2);
    if (str3 == NULL)
    {
        printf("Substring not found in the string");
    }
    else
    {
        int l = strlen(str2);
        str3[l] = '\0';
        printf("Substring located -> %s", str3);
    }

    return 0;
}
