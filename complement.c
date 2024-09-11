#include <stdio.h>
#include <string.h>
int main()
{

    int i = 0, n = 0, a;
    char bin[10];
    printf("enter the binary no :");
    scanf("%s", bin);
    a = strlen(bin);

    while (i < a)
    {
        if (bin[i] == '1')
        {
            bin[i] = '0';
        }

        else if (bin[i] == '0')
        {
            bin[i] = '1';
        }
        i++;
    }

    i = 1;

    while (i <= a)
    {
        if (bin[a - i] == '1')
        {
            bin[a - i] = '0';
        }
        else if (bin[a - i] == '0')
        {
            bin[a - i] = '1';
            break;
        }
        i++;
    }
    printf("THE 2`S COMPLIMENT OF GIVEN BINARY NO IS :%s", bin);

    return 0;
}