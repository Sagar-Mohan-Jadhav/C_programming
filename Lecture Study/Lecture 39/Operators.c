#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 40;
    int b = 20;
    int c = a + b;
    bool is_equal = true;
    bool is_greater = false;
    is_equal = c == a;
    c = a%b + a - b*a;
    is_equal = !is_equal;
    is_greater = ((c >= a) || (a != b)) && (a == b);

    printf("c = %d, is_equal = %i, is_greater = %i", c, is_equal, is_greater);
    return 0;
}
