#include <stdio.h>
#include <stdbool.h>

void display(int positions[3][3])
{
    for (int x = 0; x <= 2; ++x)
    {
        printf("\n%d %d %d", positions[x][0], positions[x][1], positions[x][2]);
    }
}

int main()
{
    int position[3][3], x, y;
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
        valid_move = true;
        if (play_first == true)
        {
            while (valid_move)
            {
                printf("Enter the position you want to play separated by white space.\n");
                scanf("%d %d", &x, &y);
                if (x < 4 && x > -1 && y < 4 && y > -1)
                {
                    position[x-1][y-1] = 1;
                }
                display(position);
            }
        }
    }
    return 0;
}
