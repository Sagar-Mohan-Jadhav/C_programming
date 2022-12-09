#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("The variables of type int occupy %zd bytes.\n", sizeof(int));
    printf("The variables of type float occupy %zd bytes.\n", sizeof(float));
    printf("The variables of type char occupy %zd bytes.\n", sizeof(char));
    printf("The variables of type bool occupy %zd bytes.\n", sizeof(bool));
    printf("The variables of type long occupy %zd bytes.\n", sizeof(long));
    printf("The variables of type double occupy %zd bytes.\n", sizeof(int));
    printf("The variables of type long long occupy %zd bytes.\n", sizeof(long long));
    return 0;
}
