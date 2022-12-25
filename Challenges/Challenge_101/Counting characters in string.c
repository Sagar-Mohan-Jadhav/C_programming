#include <stdio.h>


int length_calculator(const char *pstring)
{
    int value;
    while(*pstring != '\0')
    {
        ++pstring;
        ++value;
    }
    return value;
}

int main()
{
    char string1[50] = "This is a big string.";
    int value1;

    value1 = length_calculator(string1);
    printf("The length of the string is %d.\n", value1);
    return 0;
}
