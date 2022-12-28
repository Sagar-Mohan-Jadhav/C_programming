#include <stdio.h>

int main()
{
    struct date_time
    {
        struct date
        {
            int day;
            int month;
            int year;
        };
        int sec;
        int minute;
        int hr;
    };

    struct date_time time_now = {{4, 5, 1998}, 13, 45, 12};

    printf("%d\n",time_now.sec);
    return 0;
}
