#include <stdio.h>

int main()
{
    enum months {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
    enum months current_month;
    char value_months[12][40] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};

    for (int count = 0; count <= 11; ++count)
    {
        current_month = count;
        printf("%s\n", value_months[current_month]);
    }
    return 0;
}
