#include <stdio.h>

int main()
{
    int matrix1[3][4], matrix2[3][4], resultMatrix[3][4];

    printf("Enter elements for Matrix 1 (3x4):\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter elements for row %d: ", i + 1);
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix1[i][j]); // Reading elements for Matrix 1
        }
    }

    printf("\nEnter elements for Matrix 2 (3x4):\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter elements for row %d: ", i + 1);
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix2[i][j]); // Reading elements for Matrix 2
        }
    }

    printf("\nMatrix 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix1[i][j]); // Displaying Matrix 1
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix2[i][j]); // Displaying Matrix 2
        }
        printf("\n");
    }

    printf("\nResultant Matrix (Sum of Matrix 1 and Matrix 2):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j]; // Adding matrices
            printf("%d ", resultMatrix[i][j]);                  // Displaying the sum matrix
        }
        printf("\n");
    }

    return 0;
}
