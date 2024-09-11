#include <stdio.h>
int main()
{
    int chk_in_box, chk_for_1, chk_for_2;

    printf("enter the no of chk in box:");
    scanf("%d", &chk_in_box);
    printf("enter the no of chk for 1:");
    scanf("%d", &chk_for_1);
    chk_for_2 = chk_in_box - chk_for_1;
    chk_in_box = 0;
    while (chk_for_1 != 0 && chk_for_2 != 0 && chk_for_1 != chk_for_2)
    {
        if (chk_for_1 > chk_for_2)
        {
            chk_in_box += chk_for_2;
            chk_for_1 -= chk_for_2;
        }
        else
        {
            chk_in_box += chk_for_1;
            chk_for_2 -= chk_for_1;
        }
    }
    printf("the no of chk in box is %d:", chk_in_box);

    return 0;
}