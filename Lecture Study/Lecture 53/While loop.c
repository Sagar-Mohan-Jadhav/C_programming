#include <stdio.h>

int main()
{
    int count  = 0;
    char value_months[12][40] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};

    while (count <= 11)
    {
        printf("%s\n", value_months[count]);
        count = count + 1;
    }

    printf("\n\n");
    count = 0;

    do
    {
        printf("%s\n", value_months[count]);
        count = count + 1;
    }
    while(count<= 11);
    return 0;
}
