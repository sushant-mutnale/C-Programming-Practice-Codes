#include <stdio.h>
#include <string.h>
int main()
{
    int n, packet_in = 0, blink = 0;
    char a[100];
    printf("enter the string :");
    gets(a);
    printf("enter the maximum size :");
    scanf("%d", &n);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'e')
            packet_in++;
        else if (a[i] == 'l' && packet_in != 0)
            packet_in--;

        if (packet_in > n)
        {
            blink++;
            packet_in = n;
        }
    }
    printf("the no of blink is %d", blink);

    return 0;
}