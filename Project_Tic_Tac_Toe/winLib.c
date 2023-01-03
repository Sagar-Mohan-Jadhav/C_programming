#include "winLib.h"

void win_finder(int *play_board0, int *play_board1, int *play_board2, int *best_move_row, int *best_move_column, bool *is_win)
{
    if ((*(play_board0) + *(play_board0 + 1) + *(play_board0 + 2)) == 6)
    {
        *is_win = true;
    }
    else if ((*(play_board1) + *(play_board1 + 1) + *(play_board1 + 2)) == 6)
    {
        *is_win = true;
    }
    else if ((*(play_board2) + *(play_board2 + 1) + *(play_board2 + 2)) == 6)
    {
        *is_win = true;
    }
    else if ((*(play_board0) + *(play_board1) + *(play_board2)) == 6)
    {
        *is_win = true;
    }
    else if ((*(play_board0 + 1) + *(play_board1 + 1) + *(play_board2 + 1)) == 6)
    {
        *is_win = true;
    }
    else if ((*(play_board0 + 2) + *(play_board1 + 2) + *(play_board2 + 2)) == 6)
    {
        *is_win = true;
    }
    else if ((*(play_board2) + *(play_board1 + 1) + *(play_board0 + 2)) == 6)
    {
        *is_win = true;
    }
    else if ((*(play_board0) + *(play_board1 + 1) + *(play_board2 + 2)) == 6)
    {
        *is_win = true;
    }
    return;
}

void definite_win(int *play_board0, int *play_board1, int *play_board2, int *best_move_row, int *best_move_column)
{
    int win_count = 0;
    if (*(play_board0)== 0)
    {
        if ((*(play_board0 + 1) + *(play_board0 + 2)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1 + 0) + *(play_board2 + 0)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board2 + 2))== 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 0;
        }
    }
    win_count = 0;
    if (*(play_board0 + 1)== 0)
    {
        if ((*(play_board0) + *(play_board0 + 2)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1 + 1) + *(play_board2 + 1)) == 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 1;
        }
    }
    win_count = 0;
    if (*(play_board0 + 2)== 0)
    {
        if ((*(play_board0) + *(play_board0 + 1)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1 + 2) + *(play_board2 + 2)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board2 + 0))== 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 2;
        }
    }
    win_count = 0;
    if (*(play_board1)== 0)
    {
        if ((*(play_board1 + 1) + *(play_board1 + 2)) == 4)
        {
            win_count++;
        }
        if ((*(play_board0) + *(play_board2 + 0)) == 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 0;
        }
    }
    win_count = 0;
    if (*(play_board1 + 1)== 0)
    {
        if ((*(play_board0) + *(play_board2 + 2)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1) + *(play_board1 + 2)) == 4)
        {
            win_count++;
        }
        if ((*(play_board0 + 1)+ *(play_board2 + 1))== 4)
        {
            win_count++;
        }
        if ((*(play_board2)+ *(play_board0 + 2))== 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 1;
        }
    }
    win_count = 0;
    if (*(play_board1 + 2)== 0)
    {
        if ((*(play_board1) + *(play_board1 + 1)) == 4)
        {
            win_count++;
        }
        if ((*(play_board0 + 2) + *(play_board2 + 2)) == 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 2;
        }
    }
    win_count = 0;
    if (*(play_board2)== 0)
    {
        if ((*(play_board0) + *(play_board1)) == 4)
        {
            win_count++;
        }
        if ((*(play_board2 + 1) + *(play_board2 + 2)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board0 + 2))== 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 0;
        }
    }
    win_count = 0;
    if (*(play_board2 + 1)== 0)
    {
        if ((*(play_board2) + *(play_board2 + 2)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1 + 1) + *(play_board0 + 1)) == 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 1;
        }
    }
    win_count = 0;
    if (*(play_board2 + 2)== 0)
    {
        if ((*(play_board0) + *(play_board1 + 1)) == 4)
        {
            win_count++;
        }
        if ((*(play_board2) + *(play_board2 + 1)) == 4)
        {
            win_count++;
        }
        if ((*(play_board1 + 2)+ *(play_board0 + 2))== 4)
        {
            win_count++;
        }
        if (win_count>= 1)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 2;
        }
    }
    return;
}


void potential_win(int *play_board0, int *play_board1, int *play_board2, int *best_move_row, int *best_move_column)
{
    int win_count = 0;
    if (*(play_board0)== 0)
    {
        if ((*(play_board0 + 1) + *(play_board0 + 2)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1 + 0) + *(play_board2 + 0)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board2 + 2))== 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 0;
        }
    }
    win_count = 0;
    if (*(play_board0 + 1)== 0)
    {
        if ((*(play_board0) + *(play_board0 + 2)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1 + 1) + *(play_board2 + 1)) == 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 1;
        }
    }
    win_count = 0;
    if (*(play_board0 + 2)== 0)
    {
        if ((*(play_board0) + *(play_board0 + 1)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1 + 2) + *(play_board2 + 2)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board2 + 0))== 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 0;
            *(best_move_column) = 2;
        }
    }
    win_count = 0;
    if (*(play_board1)== 0)
    {
        if ((*(play_board1 + 1) + *(play_board1 + 2)) == 2)
        {
            win_count++;
        }
        if ((*(play_board0) + *(play_board2 + 0)) == 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 0;
        }
    }
    win_count = 0;
    if (*(play_board1 + 1)== 0)
    {
        if ((*(play_board0) + *(play_board2 + 2)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1) + *(play_board1 + 2)) == 2)
        {
            win_count++;
        }
        if ((*(play_board0 + 1)+ *(play_board2 + 1))== 2)
        {
            win_count++;
        }
        if ((*(play_board2)+ *(play_board0 + 2))== 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 1;
        }
    }
    win_count = 0;
    if (*(play_board1 + 2)== 0)
    {
        if ((*(play_board1) + *(play_board1 + 1)) == 2)
        {
            win_count++;
        }
        if ((*(play_board0 + 2) + *(play_board2 + 2)) == 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 1;
            *(best_move_column) = 2;
        }
    }
    win_count = 0;
    if (*(play_board2)== 0)
    {
        if ((*(play_board0) + *(play_board1)) == 2)
        {
            win_count++;
        }
        if ((*(play_board2 + 1) + *(play_board2 + 2)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1 + 1)+ *(play_board0 + 2))== 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 0;
        }
    }
    win_count = 0;
    if (*(play_board2 + 1)== 0)
    {
        if ((*(play_board2) + *(play_board2 + 2)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1 + 1) + *(play_board0 + 1)) == 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 1;
        }
    }
    win_count = 0;
    if (*(play_board2 + 2)== 0)
    {
        if ((*(play_board0) + *(play_board1 + 1)) == 2)
        {
            win_count++;
        }
        if ((*(play_board2) + *(play_board2 + 1)) == 2)
        {
            win_count++;
        }
        if ((*(play_board1 + 2)+ *(play_board0 + 2))== 2)
        {
            win_count++;
        }
        if (win_count>= 2)
        {
            *(best_move_row) = 2;
            *(best_move_column) = 2;
        }
    }
    return;
}

void no_strat_no_risk(int *play_board0, int *play_board1, int *play_board2, int *best_move_row, int *best_move_column)
{
    if (*(play_board1 + 1) == 0)
    {
        *(best_move_row) = 1;
        *(best_move_column) = 1;
    }
    else if (*(play_board2 + 2) == 0)
    {
        *(best_move_row) = 2;
        *(best_move_column) = 2;
    }
    else if (*(play_board0 + 2) == 0)
    {
        *(best_move_row) = 0;
        *(best_move_column) = 2;
    }
    else if (*(play_board2 + 0) == 0)
    {
        *(best_move_row) = 2;
        *(best_move_column) = 0;
    }
    else if (*(play_board0 + 0) == 0)
    {
        *(best_move_row) = 0;
        *(best_move_column) = 0;
    }
    else if (*(play_board2 + 1) == 0)
    {
        *(best_move_row) = 2;
        *(best_move_column) = 1;
    }
    else if (*(play_board1) == 0)
    {
        *(best_move_row) = 1;
        *(best_move_column) = 0;
    }
    else if (*(play_board1 + 2) == 0)
    {
        *(best_move_row) = 1;
        *(best_move_column) = 2;
    }
    else if (*(play_board0 + 1) == 0)
    {
        *(best_move_row) = 0;
        *(best_move_column) = 1;
    }
    return;
}
