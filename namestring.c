#include <stdio.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int num_names;

    // Input the number of names
    printf("Enter the number of names: ");
    scanf("%d", &num_names);

    // Consume the newline character after the integer input
    getchar();

    // Input each name
    printf("Enter %d names, one per line:\n", num_names);
    for (int i = 0; i < num_names; i++) {
        scanf("%s", names[i]);
    }

    // Display the names
    printf("\nNames entered:\n");
    for (int i = 0; i < num_names; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
