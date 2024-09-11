#include <stdio.h>
void check(int[], int, int, int);
int k = 0;
int main()
{
    int ary[5] = {4, 6, 10, 12, 16};
    int target = 16;
    int l = 0, r = 4;
    check(ary, l, r, target);
    return 0;
}
void check(int ary[], int l, int r, int target)
{
    int p;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ary[mid] == target)
        {
            k = 1;
            p = mid + 1;
            break;
        }
        else
        {
            if (ary[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
    if (k != 0)
    {
        printf("THe Number Is Present at %d position  :", p);
    }
    else
    {
        printf("THE NUMBER IS NOT PRESENT IN THE GIVEN ARRAY");
    }
}