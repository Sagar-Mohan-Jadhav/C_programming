#include <stdio.h>

float multiplication(float x, float y)
{
    return (x*y);
}
int main()
{
    float m, n, o;
    o = multiplication(m = 4.5, n = 2);
    printf("%.2f\n", o);
    return 0;
}
