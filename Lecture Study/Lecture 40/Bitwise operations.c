#include <stdio.h>

int main()
{
    unsigned int a = 45; // 0010 1101
    unsigned int b = 59; // 0011 1011
    unsigned int c;

    c = a & b; // 0010 1101 and operation
    printf("Result of a&b is %d.\n", c);

    c = a | b; // 0011 1111 or operation
    printf("Result of a|b is %d.\n", c);

    c = a << 1; // 0111 1110 bit shifting to left
    printf("Result of a<<1 is %d.\n", c);

    c = a >> 2; // 0000 1111 bit shifting to right
    printf("Result of a>>2 is %d.\n", c);

    c = a ^ b; // 0001 0110 xor operation
    printf("Result of a^b is %d.\n", c);

    c = ~a; // 0001 0110 negation operation
    printf("Result of ~a is %d.\n", c);

    return 0;
}
