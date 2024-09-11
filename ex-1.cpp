#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    printf("-------------------------\n");

    for (i = 1; i <= 10; i++) {
        printf("%d x %2d = %2d\n", num, i, num * i);
        return 0;
    }
}
    
