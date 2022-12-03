#include <stdio.h>
#include <stdbool.h>

int main()
{
    // int datatype contains integers including negative values.
    int intvalue;
    // float data type contains floating point variables.
    float floatvalue;
    // boolean contains true false values.
    bool boolvalue;
    // double is same as float with double precision.
    double doublevalue;

    //testing float and double.
    floatvalue = 30e+13;
    doublevalue = 30e+13;
    printf("%f %lf", floatvalue, doublevalue);
    return 0;
}
