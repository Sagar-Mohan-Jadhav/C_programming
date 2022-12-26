#include <stdio.h>


void square1(int *number)
{
    *number = (*number)*(*number);
    return;
}

int *square2(int *number)
{
    *number = (*number)*(*number);
    return number;
}

int main()
{
    int num = 6;

    square1(&num);
    printf("The result of square1 is %d.\n", num);
    num = 5;
    square2(&num);
    printf("The result of square2 is %d.\n", num);

    return 0;
}
