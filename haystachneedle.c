// #include <stdio.h>
// #include <string.h>
// int check(char str1[], char str2[], int i)
// {
//     int k = i;
//     for (int j = 0; str2[j] != '\0'; j++)
//     {
//         if (str1[k] == str2[j])
//         {
//             k++;
//         }
//         else
//         {
//             return -1;
//         }
//     }
//     return i + 1;
// }
// int main()
// {
//     int l;
//     char str1[50], str2[30];

//     printf("ENTER HAYSTACK STING : ");
//     gets(str1);
//     // getchar();
//     printf("ENTER NEEDLE STRING: ");
//     gets(str2);
//     for (int i; str1[i] != '\0'; i++)
//     {
//         l = check(str1, str2, i);
//         if (l == -1)
//             continue;

//         break;
//     }

//     if (l == -1)
//     {
//         printf("%s IS NOT FOUND IN %s", str2, str1);
//     }
//     else
//     {
//         int j = strlen(str2);

//         printf(" %s IS LOCATED AT INDEX %d TO %d IN %s", str2, l, l + j - 1, str1);
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>
int check(char str1[], char str2[], int i)
{
    int k = i;
    for (int j = 0; str2[j] != '\0'; j++)
    {
        if (str1[k] == str2[j])
        {
            k++;
        }
        else
        {
            return -1;
        }
    }
    return i + 1;
}
int main()
{
    int l;
    char str1[50], str2[30];

    printf("ENTER HAYSTACK STING : ");
    gets(str1);
    // getchar();
    printf("ENTER NEEDLE STRING: ");
    gets(str2);
    for (int i; str1[i] != '\0'; i++)
    {
        l = check(str1, str2, i);
        if (l == -1)
            continue;

        break;
    }

    if (l == -1)
    {
        printf("%s IS NOT FOUND IN %s", str2, str1);
    }
    else
    {
        int j = strlen(str2);

        printf(" %s IS LOCATED AT INDEX %d TO %d IN %s", str2, l, l + j - 1, str1);
    }

    return 0;
}
