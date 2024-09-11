#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "apple";
    char str2[] = "orange";
    char str3[] = "apple";

    int result1 = strcmp(str1, str2);
    int result2 = strcmp(str1, str3);

    printf("the resutlt 1 is %d\n\n", result1);
    printf("the resutlt 2 is %d\n\n", result2);
    if (result1 == 0)
    {
        printf("str1 and str2 are equal\n");
    }
    else if (result1 < 0)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str1 is greater than str2\n");
    }

    if (result2 == 0)
    {
        printf("str1 and str3 are equal\n");
    }
    else if (result2 < 0)
    {
        printf("str1 is less than str3\n");
    }
    else
    {
        printf("str1 is greater than str3\n");
    }

    return 0;
}
