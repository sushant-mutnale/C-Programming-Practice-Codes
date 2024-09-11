// #include <stdio.h>

// int main() {
//     char board[50];
//     // Initialize the board with empty spaces
//     for (int i = 0; i < 50; ++i) {
//         board[i] = ' ';
//     }
//     // Place the player 'o' at starting position
//     board[0] = 'o';

//     // Define ladder and snake positions
//     int ladder_start = 8;
//     int ladder_end = 31;
//     int snake_head = 36;
//     int snake_tail = 12;

//     // Place ladder and snake symbols on the board
//     board[ladder_start] = '^';
//     board[ladder_end] = '^';
//     board[snake_head] = 'S';
//     board[snake_tail] = 's';

//     // Display the game board
//     printf(" _______________________________________________________________________________\n");
//     printf("                                                                               \n");
//     for (int row = 9; row >= 0; --row) {
//         // printf("|");
//         for (int col = 0; col < 5; ++col) {
//             int index = row * 5 + col;
//             printf("   %c   ", board[index]);
//         }
//         printf("\n");
//         for (int col = 0; col < 5; ++col) {
//             int index = row * 5 + col;
//             printf("       %02d       ", index + 1);
//         }
//         printf("\n                                                                               \n");
//     }
//     printf("_______________________________________________________________________________\n");

//     return 0;
// }
#include <stdio.h>

int main()
{
    char board[50];
    // Initialize the board with empty spaces
    for (int i = 0; i < 50; ++i)
    {
        board[i] = ' ';
    }
    // Place the player 'o' at starting position
    board[0] = 'o';

    // Define ladder and snake positions
    int ladder_start = 8;
    int ladder_end = 31;
    int snake_head = 36;
    int snake_tail = 12;

    // Place ladder and snake symbols on the board
    // board[ladder_start] = '^';
    // board[ladder_end] = '^';
    // board[snake_head] = 'S';
    // board[snake_tail] = 's';

    // Add snake body
    // for (int i = snake_tail + 1; i < snake_head; ++i) {
    //     board[i] = 'W'; // ASCII art for snake's body
    // }

    // Display the game board
    // printf(" _______________________________________________________________________________\n");
    printf("                                                                               \n");
    for (int row = 9; row >= 0; --row)
    {
        // printf("|");
        for (int col = 0; col < 5; ++col)
        {
            int index = row * 5 + col;
            printf("      %c       ", board[index]);
        }
        printf("\n");
        for (int col = 0; col < 5; ++col)
        {
            int index = row * 5 + col;
            printf("      %02d      ", index + 1);
        }
        printf("\n");
        for (int i = 0; i < 72; i++)
        {
            if ((row == 2 && (i > 19 && i < 35)) || (row == 8 && i == 20) || (row == 7 && (i > 5 && i < 21)) || (i==6&&(row<7&&row>3)) || (row == 3 && i == 35) || (row == 4 && (i > 34 && i < 47)))
            {
                printf("%c ", 4);
                i++;
            }
            else if ((row == 1 && (i == 34 || i == 47)) || ((row == 5 || row == 6 || row == 7 || row == 8) && i == 48) || (row == 2 && (i == 48 || i == 63)) || (i == 62 && (row == 2 || row == 3 || row == 4)) || (i == 20 && (row == 3 || row == 4 || row == 5)))
            {
                printf("|-|");
                i = i + 2;
            }
            else if ((row == 1 && (i < 47 && i > 35)) || (row == 2 && (i < 63 && i > 50)) || (row == 5 && (i > 21 && i < 47)))
            {
                printf("%c ", 206);
                i++;
            }
            else if ((row == 9 && i == 20) || (row == 3 && i == 6) || (row == 1 && i == 19) || (row == 4 && i == 48))
            {
                printf("(%c)", 34);
                i = i + 2;
            }
            else
                printf(" ");
        }
        printf("+\n");

        // printf("_______________________________________________________________________________\n");
    }
    return 0;
}
