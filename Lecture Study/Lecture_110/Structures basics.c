#include <stdio.h>

int main()
{
    // different methods of defining structures.

    // method 1
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct date nowtime1;
    nowtime1.day = 06;
    nowtime1.month = 11;
    nowtime1.year = 2021;

    printf("%d.%d.%d\n", nowtime1.day, nowtime1.month, nowtime1.year);

    // method 2
    struct current_time
    {
        int day;
        int month;
        int year;
    }nowtime2;
    nowtime2.day = 8;
    nowtime2.month = 12;
    nowtime2.year = 2021;

    printf("%d.%d.%d\n", nowtime2.day, nowtime2.month, nowtime2.year);


    // method for defining structures, method 1
    struct date nowtime3 = {8, 2, 1996};
    printf("%d.%d.%d\n", nowtime3.day, nowtime3.month, nowtime3.year);

    // method 2
    struct date nowtime4 = {.month = 7, .year = 2002};
    printf("%d.%d.%d\n", nowtime4.day, nowtime4.month, nowtime4.year);

    // method 3
    struct date nowtime5;
    nowtime5 = (struct date) {9, 4, 1992};
    printf("%d.%d.%d\n", nowtime5.day, nowtime5.month, nowtime5.year);


    return 0;
}
