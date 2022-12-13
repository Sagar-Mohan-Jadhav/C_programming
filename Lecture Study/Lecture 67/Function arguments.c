#include <stdio.h>

void multiplication(float x, float y)
{
    printf("The multiplication is %.2f.\n", (x*y));
}
int main()
{
    float m, n;
    multiplication(m = 4.5, n = 2);
    multiplication(m = 0.9, n = 2.3);
    return 0;
}
