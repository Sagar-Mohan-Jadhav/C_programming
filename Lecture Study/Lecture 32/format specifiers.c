#include <stdio.h>
#include <stdbool.h>

int main()
{
    int intval = 6;
    float floatval = 347.876898;
    char charval = 'i';
    double doubleval = 4.5e+10;
    bool boolval = 1;

    printf("intval = %i\n", intval);
    //taking only 3 digits after decimal place
    printf("floatval = %.3f\n", floatval);
    printf("charval = %c\n", charval);
    //printing double in exponent format with multiple places after decimal
    printf("doubleval = %e\n", doubleval);
    //printing double in exponent format
    printf("doubleval = %g\n", doubleval);
    printf("boolval = %i\n", boolval);
    return 0;
}
