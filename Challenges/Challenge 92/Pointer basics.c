#include <stdio.h>

int main()
{
    int number = 5;
    int *pnumber = NULL;

    pnumber = &number;
    printf("The address of the pointer is %p.\n", &pnumber);
    printf("The value of the pointer is %p.\n", pnumber);
    printf("The value the pointer points to is %d.\n", *pnumber);
    return 0;
}
