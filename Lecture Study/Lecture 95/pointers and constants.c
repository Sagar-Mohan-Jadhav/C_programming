#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2 = 10;

    // to avoid the change of value to where pointer is pointing to.
    const int *pnum1 = NULL;
    pnum1 = &num1;
    num1 = 6;
    // *pnum1 = *pnum1 + 1; wont work
    printf("%d\n", *pnum1);

    return 0;
}
