#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int user_num = -1, random_num;
    bool equal = false;
    time_t t;
    srand((unsigned) time(&t));
    random_num = rand() % 21;
    while(equal == false)
    {
        printf("Enter a number between 0 - 20.\n");
        scanf("%d", &user_num);
        while (user_num < 0 || user_num > 20)
        {
            printf("Enter a number between 0 - 20.\n");
            scanf("%d", &user_num);
        }
        if (user_num == random_num)
        {
            printf("You guessed the right number.\n");
            equal = true;
        }
        else if (user_num > random_num)
        {
            printf("Guess a lower number.\n");
        }
        else
        {
            printf("Guess a higher number.\n");
        }
    }
    return 0;
}
