#include <stdio.h>
#include <stdbool.h>

void display(int positions[3][3])
{
    for (int x = 0; x <= 2; ++x)
    {
        printf("\n%d %d %d\n", positions[x][0], positions[x][1], positions[x][2]);
    }
}

int danger(int positions[3][3])
{
    int danger_pos[3] = {-1, -1, -1};
    for (int count1 = 0; count1 <= 2; ++count1)
    {
        int danger_count = 0;
        for (int count2 = 0; count2 <= 2; ++count2)
        {
            if (positions[count1][count2] == 1)
            {
                danger_count = danger_count + 1;
            }
            else if (positions[count1][count2] == 2)
            {
                danger_count = 0;
                break;
            }
        }
        if (danger_count == 2)
        {
            danger_pos[0] = count1;
            break;
        }
    }


    for (int count3 = 0; count3 <= 2; ++count3)
    {
        int danger_count = 0;
        for (int count4 = 0; count4 <= 2; ++count4)
        {
            if (positions[count4][count3] == 1)
            {
                danger_count = danger_count + 1;
            }
            else if (positions[count4][count3] == 2)
            {
                danger_count = 0;
                break;
            }
        }
        if (danger_count == 2)
        {
            danger_pos[1] = count4;
            break;
        }
    }


    if ((positions[0][0] == 1 && positions[1][1] == 1 ) || (positions[1][1] == 1 && positions[2][2] == 1) || (positions[0][0] == 1 && positions[2][2] == 1))
    {
        if (positions[0][0] != 2 && positions[1][1] != 2 && positions[2][2] != 2)
        {
            danger_pos[2] = 1;
        }
    }
    if ((positions[2][0] == 1 && positions[1][1] == 1 ) || (positions[1][1] == 1 && positions[0][2] == 1) || (positions[2][0] == 1 && positions[0][2] == 1))
    {
        if (positions[2][0] != 2 && positions[1][1] != 2 && positions[0][2] != 2)
        {
            danger_pos[2] = 2;
        }
    }

    return danger_pos;
}

int computer_play(int positions[3][3])
{
    int danger_pos;
    danger_pos = danger(positions);
    for (int count1 = 0; count1 <=1; ++count1)
    {
        if (danger_pos[count1] != -1)
        {
            if (count1 == 0)
            {
                for (int count2 = 0; count2 <= 2; ++count2)
                {
                    if (positions[danger_pos[count1]][count2] == 0)
                    {
                        positions[danger_pos[count1]][count2] = 2;
                    }
                }
            }
            else
            {
                for (int count2 = 0; count2 <= 2; ++count2)
                {
                    if (positions[danger_pos[count2]][count1] == 0)
                    {
                        positions[danger_pos[count2]][count1] = 2;
                    }
                }
            }
        }
    }
    return positions;
}

int main()
{
    int position[3][3] = {{0, 0, 0},{0, 0, 0}, {0, 0, 0}}, x, y;
    char char_ans;
    bool play_first = true, valid_move;
    printf("Do you want to play first, y or n?\n");
    scanf("%c", &char_ans);

    if (char_ans == 'y')
    {
        printf("Your turn.\n");
    }
    else
    {
        printf("Computer has played, your turn.\n");
        play_first = false;
    }
    for (int count = 0; count <= 8; ++count)
    {
        valid_move = false;
        if (play_first == true)
        {
            while (!valid_move)
            {
                printf("Enter the position you want to play separated by white space.\n");
                scanf("%d %d", &x, &y);
                if (x < 4 && x > -1 && y < 4 && y > -1 && ((position[x-1][y-1] != 1) && (position[x-1][y-1] != 2)))
                {
                    position[x-1][y-1] = 1;
                    valid_move = true;
                }
                else
                {
                    printf("Enter a valid position.\n");
                }
                display(position);
            }
            position = computer_play(position);
            display(position);
        }
    }
    return 0;
}
