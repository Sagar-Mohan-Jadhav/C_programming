#include "riskLib.h"

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
