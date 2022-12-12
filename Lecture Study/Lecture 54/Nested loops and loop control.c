#include <stdio.h>

int main()
{
    int count1 = 0, count2 = 0, number;
    while (count1 > -1)
    {
        while (count2 > -1)
        {
            number = count1*10 + count2;
            if (number % 2 == 0)
            {
                count2 = count2 + 1;
                continue;
            }
            else
            {
                count2 = count2 + 1;
                printf("%d\n", number);
            }
            if (count2 > 8)
            {
                count2 = 0;
                break;
            }
        }
        if (count1 > 8)
        {
            break;
        }
        count1 = count1 + 1;
    }
    return 0;
}
