#include <stdio.h>

int main()
{
    enum months {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    enum months current_month = Apr;

    switch (current_month)
    {
    case Jan:
        printf("The month is January.\n");
        break;

    case Apr:
        printf("The month is April.\n");
        break;

    default:
        printf("The month is not April or January.\n");

    }
    return 0;
}
