#include <stdio.h>

int main()
{
    int score;

    // Input score from user
    printf("Enter your score: ");
    scanf("%d", &score);

    // Determine grade based on score
    if (score >= 90)
    {
        printf("Grade: A\n");
    }
    else if (score >= 80)
    {
        printf("Grade: B\n");
    }
    else if (score >= 70)
    {
        printf("Grade: C\n");
    }
    else if (score >= 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}
