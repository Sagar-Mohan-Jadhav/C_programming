#include <stdio.h>

int main()
{
    // enum is used to define new type of datatypes.
    // values in curly braces defines the possible values of months datatype.
    enum months {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
    // defining variable current_month with datatype months
    enum months current_month;
    current_month = nov;
    printf("%d", current_month);
    // you can see the output being number 10 as nov is 10th entry if starting from 0

    // \n is also considered as a single character
    char character, newline;
    newline = '\n';
    printf("%c", newline);
    // characters are always given in single quote or positive integers if we want to assign ascii characters.
    character = 'T';
    printf("%c", character);
    return 0;
}
