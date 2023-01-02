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

void definite_risk(int *play_board0, int *play_board1, int *play_board2, int *best_move_row, int *best_move_column)
{
    bool risk = false;
    int risk_row = 3, risk_count = 0, risk_column = 3, risk_diag = 3;
    for (int count = 0; count <= 2; count++)
    {
        if (*(play_board0+ count) == 1)
        {
            risk_count++;
        }
        if (risk_count >= 2)
        {
            if ((*(play_board0)+ *(play_board0 + 1)+ *(play_board0 + 2)) != 4)
            {
                risk_row = 0;
                risk = true;
            }
            risk_count = 0;
            break;
        }
    }
    risk_count = 0;
    for (int count = 0; count <= 2; count++)
    {
        if (*(play_board1+ count) == 1)
        {
            risk_count++;
        }
        if (risk_count >= 2)
        {
            if ((*(play_board1)+ *(play_board1 + 1)+ *(play_board1 + 2)) != 4)
            {
                risk_row = 1;
                risk = true;
            }
            risk_count = 0;
            break;
        }
    }
    risk_count = 0;
    for (int count = 0; count <= 2; count++)
    {
        if (*(play_board2+ count) == 1)
        {
            risk_count++;
        }
        if (risk_count >= 2)
        {
            if ((*(play_board2)+ *(play_board2 + 1)+ *(play_board2 + 2)) != 4)
            {
                risk_row = 2;
                risk = true;
            }
            risk_count = 0;
            break;
        }
    }
    risk_count = 0;
    for (int count = 0; count <= 2; count++)
    {
        risk_count = 0;
        if (*(play_board0 + count)== 1)
        {
            risk_count++;
        }
        if (*(play_board1 + count)== 1)
        {
            risk_count++;
        }
        if (*(play_board2 + count)== 1)
        {
            risk_count++;
        }
        if (risk_count >= 2)
        {
            if ((*(play_board0 + count)+ *(play_board1 + count)+ *(play_board2 + count)) != 4)
            {
                risk_column = count;
                risk = true;
            }
            risk_count = 0;
            break;
        }
    }
    risk_count = 0;
    if (*(play_board0)== 1)
    {
        risk_count++;
    }
    if (*(play_board1 + 1)== 1)
    {
        risk_count++;
    }
    if (*(play_board2 + 2)== 1)
    {
        risk_count++;
    }
    if (risk_count >= 2)
    {
        if ((*(play_board0)+ *(play_board1 + 1)+ *(play_board2 + 2)) != 4)
        {
            risk_diag = 0;
            risk = true;
        }
        risk_count = 0;
    }
    risk_count = 0;
    if (*(play_board2 + 0)== 1)
    {
        risk_count++;
    }
    if (*(play_board1 + 1)== 1)
    {
        risk_count++;
    }
    if (*(play_board0 + 2)== 1)
    {
        risk_count++;
    }
    if (risk_count >= 2)
    {
        if ((*(play_board2)+ *(play_board1 + 1)+ *(play_board0 + 2)) != 4)
        {
            risk_diag = 1;
            risk = true;
        }
        risk_count = 0;
    }
    if (risk)
    {
        if (risk_row == 0)
        {
            for (int count = 0; count<= 2; count++)
            {
                if (*(play_board0 + count)== 0)
                {
                    *(best_move_row) = 0;
                    *(best_move_column) = count;
                    break;
                }
            }
        }
        else if (risk_row == 1)
        {
            for (int count = 0; count<= 2; count++)
            {
                if (*(play_board1 + count)== 0)
                {
                    *(best_move_row) = 1;
                    *(best_move_column) = count;
                    break;
                }
            }
        }
        else if (risk_row == 2)
        {
            for (int count = 0; count<= 2; count++)
            {
                if (*(play_board2 + count)== 0)
                {
                    *(best_move_row) = 2;
                    *(best_move_column) = count;
                    break;
                }
            }
        }
        else if (risk_column== 0)
        {
            if (*(play_board0)== 0)
            {
                *(best_move_row) = 0;
                *(best_move_column) = 0;
            }
            else if (*(play_board1)== 0)
            {
                *(best_move_row) = 1;
                *(best_move_column) = 0;
            }
            else if (*(play_board2)== 0)
            {
                *(best_move_row) = 2;
                *(best_move_column) = 0;
            }
        }
        else if (risk_column== 1)
        {
            if (*(play_board0 + 1)== 0)
            {
                *(best_move_row) = 0;
                *(best_move_column) = 1;
            }
            else if (*(play_board1 + 1)== 0)
            {
                *(best_move_row) = 1;
                *(best_move_column) = 1;
            }
            else if (*(play_board2 + 1)== 0)
            {
                *(best_move_row) = 2;
                *(best_move_column) = 1;
            }
        }
        else if (risk_column== 2)
        {
            if (*(play_board0 + 2)== 0)
            {
                *(best_move_row) = 0;
                *(best_move_column) = 2;
            }
            else if (*(play_board1 + 2)== 0)
            {
                *(best_move_row) = 1;
                *(best_move_column) = 2;
            }
            else if (*(play_board2 + 2)== 0)
            {
                *(best_move_row) = 2;
                *(best_move_column) = 2;
            }
        }
        else if (risk_diag== 0)
        {
            if (*(play_board0)== 0)
            {
                *(best_move_row) = 0;
                *(best_move_column) = 0;
            }
            else if (*(play_board1 + 1)== 0)
            {
                *(best_move_row) = 1;
                *(best_move_column) = 1;
            }
            else if (*(play_board2 + 2)== 0)
            {
                *(best_move_row) = 2;
                *(best_move_column) = 2;
            }
        }
        else if (risk_diag== 1)
        {
            if (*(play_board0 + 2)== 0)
            {
                *(best_move_row) = 0;
                *(best_move_column) = 2;
            }
            else if (*(play_board1 + 1)== 0)
            {
                *(best_move_row) = 1;
                *(best_move_column) = 1;
            }
            else if (*(play_board2 + 0)== 0)
            {
                *(best_move_row) = 2;
                *(best_move_column) = 0;
            }
        }
    }
    return;
}

void potential_risk(int *play_board0, int *play_board1, int *play_board2, int *best_move_row, int *best_move_column)
{
    int risk_count = 0;
    if (*(play_board0)== 0)
    {
        if ((*(play_board0 + 1) + *(play_board0 + 2)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1 + 0) + *(play_board2 + 0)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board2 + 2))== 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 0;
        }
    }
    risk_count = 0;
    if (*(play_board0 + 1)== 0)
    {
        if ((*(play_board0) + *(play_board0 + 2)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1 + 1) + *(play_board2 + 1)) == 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 1;
        }
    }
    risk_count = 0;
    if (*(play_board0 + 2)== 0)
    {
        if ((*(play_board0) + *(play_board0 + 1)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1 + 2) + *(play_board2 + 2)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board2 + 0))== 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 2;
        }
    }
    risk_count = 0;
    if (*(play_board1)== 0)
    {
        if ((*(play_board1 + 1) + *(play_board1 + 2)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board0) + *(play_board2 + 0)) == 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 0;
        }
    }
    risk_count = 0;
    if (*(play_board1 + 1)== 0)
    {
        if ((*(play_board0) + *(play_board2 + 2)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1) + *(play_board1 + 2)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board0 + 1)+ *(play_board2 + 1))== 1)
        {
            risk_count++;
        }
        if ((*(play_board2)+ *(play_board0 + 2))== 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 1;
        }
    }
    risk_count = 0;
    if (*(play_board1 + 2)== 0)
    {
        if ((*(play_board1) + *(play_board1 + 1)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board0 + 2) + *(play_board2 + 2)) == 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 2;
        }
    }
    risk_count = 0;
    if (*(play_board2)== 0)
    {
        if ((*(play_board0) + *(play_board1)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board2 + 1) + *(play_board2 + 2)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board0 + 2))== 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 0;
        }
    }
    risk_count = 0;
    if (*(play_board2 + 1)== 0)
    {
        if ((*(play_board2) + *(play_board2 + 2)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1 + 1) + *(play_board0 + 1)) == 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 1;
        }
    }
    risk_count = 0;
    if (*(play_board2 + 2)== 0)
    {
        if ((*(play_board0) + *(play_board1 + 1)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board2) + *(play_board2 + 1)) == 1)
        {
            risk_count++;
        }
        if ((*(play_board1 + 2)+ *(play_board0 + 2))== 1)
        {
            risk_count++;
        }
        if (risk_count>= 2)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 2;
        }
    }
    return;
}

void computer_turn(int *play_board0, int *play_board1, int *play_board2, int *best_move_row, int *best_move_column)
{
    printf("Computers play.\n");
    if (*(best_move_row) == 0)
    {
        *(play_board0 + *(best_move_column)) = 2;
    }
    else if(*(best_move_row) == 1)
    {
        *(play_board1 + *(best_move_column)) = 2;
    }
    else if (*(best_move_row)== 2)
    {
        *(play_board2 + *(best_move_column)) = 2;
    }
    return;
}

int main()
{
    int play_board[3][3] = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, best_move_row = 0, best_move_column = 0;
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
            potential_risk(play_board[0], play_board[1], play_board[2], &best_move_row, &best_move_column);
            definite_risk(play_board[0], play_board[1], play_board[2], &best_move_row, &best_move_column);
            computer_turn(play_board[0], play_board[1], play_board[2],&best_move_row, &best_move_column);
            disp_board(play_board[0], play_board[1], play_board[2]);
        }
        user_turn(play_board[0], play_board[1], play_board[2]);
        disp_board(play_board[0], play_board[1], play_board[2]);
    }
    else
    {
        for (int count = 0; count <= 3; count++)
        {
            potential_risk(play_board[0], play_board[1], play_board[2], &best_move_row, &best_move_column);
            definite_risk(play_board[0], play_board[1], play_board[2], &best_move_row, &best_move_column);
            computer_turn(play_board[0], play_board[1], play_board[2],&best_move_row, &best_move_column);
            disp_board(play_board[0], play_board[1], play_board[2]);
            user_turn(play_board[0], play_board[1], play_board[2]);
            disp_board(play_board[0], play_board[1], play_board[2]);
        }
        potential_risk(play_board[0], play_board[1], play_board[2], &best_move_row, &best_move_column);
        definite_risk(play_board[0], play_board[1], play_board[2], &best_move_row, &best_move_column);
        computer_turn(play_board[0], play_board[1], play_board[2],&best_move_row, &best_move_column);
        disp_board(play_board[0], play_board[1], play_board[2]);
    }
    return 0;
}
