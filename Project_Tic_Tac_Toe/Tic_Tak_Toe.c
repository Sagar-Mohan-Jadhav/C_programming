#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void disp_board(int *play_board0, int *play_board1, int *play_board2)
{
    printf("%d %d %d\n%d %d %d\n%d %d %d\n\n\n\n", *(play_board0), *(play_board0 + 1), *(play_board0 + 2), *(play_board1),
            *(play_board1 + 1), *(play_board1 + 2), *(play_board2), *(play_board2 + 1), *(play_board2 + 2));
    return;
}

void user_turn(int *play_board0, int *play_board1, int *play_board2)
{
    int user_play_row = 0, user_play_column = 0;
    bool invalid_move = true;
    printf("Enter the move you want to play separated by white space (ex. 1 2).\n");
    scanf("%d %d", &user_play_row, &user_play_column);
    printf("The player entered %d and %d\n", user_play_row, user_play_column);
    while (user_play_column >= 3 || user_play_row >= 3 || user_play_column <= -1 || user_play_row <= -1)
    {
        printf("The move is invalid\nPlease play again.\n");
        scanf("%d %d", &user_play_row, &user_play_column);
    }
    while (invalid_move)
    {
        if (user_play_row == 0)
        {
            if (*(play_board0 + user_play_column) == 0)
            {
                invalid_move = false;
                break;
            }
        }
        else if(user_play_row == 1)
        {
            if (*(play_board1 + user_play_column) == 0)
            {
                invalid_move = false;
                break;
            }
        }
        else
        {
            if (*(play_board2 + user_play_column) == 0)
            {
                invalid_move = false;
                break;
            }
        }
        printf("The move is invalid\nPlease play again.\n");
        scanf("%d %d", &user_play_row, &user_play_column);
    }
    if (user_play_row == 0)
    {
        *(play_board0 + user_play_column) = 1;
    }
    else if(user_play_row == 1)
    {
        *(play_board1 + user_play_column) = 1;
    }
    else
    {
        *(play_board2 + user_play_column) = 1;
    }
    return;
}

void computer_turn(int *play_board0, int *play_board1, int *play_board2)
{

    return;
}

int main()
{
    int play_board[3][3] = {{0, 0, 0},{0, 0, 0},{0, 0, 0}};
    char user_play_first[10];
    disp_board(play_board[0], play_board[1], play_board[2]);
    printf("Do you want to play first? y or n.\n");
    scanf("%s", user_play_first);
    if (strcmp(user_play_first, "y")== 0)
    {
        for (int count = 0; count <= 3; count++)
        {
            user_turn(play_board[0], play_board[1], play_board[2]);
            disp_board(play_board[0], play_board[1], play_board[2]);
            computer_turn(play_board[0], play_board[1], play_board[2]);
            disp_board(play_board[0], play_board[1], play_board[2]);
        }
        user_turn(play_board[0], play_board[1], play_board[2]);
        disp_board(play_board[0], play_board[1], play_board[2]);
    }
    else
    {
        for (int count = 0; count <= 3; count++)
        {
            computer_turn(play_board[0], play_board[1], play_board[2]);
            disp_board(play_board[0], play_board[1], play_board[2]);
            user_turn(play_board[0], play_board[1], play_board[2]);
            disp_board(play_board[0], play_board[1], play_board[2]);
        }
        computer_turn(play_board[0], play_board[1], play_board[2]);
        disp_board(play_board[0], play_board[1], play_board[2]);
    }
    return 0;
}
