#include <stdio.h>

int main()
{
    int minutes, years, days, rem_days;
    printf("Enter number of minutes.\n");
    scanf("%d", &minutes);
    days = minutes/(60*24);
    rem_days = days % (365);
    years = (days- rem_days)/365;
    printf("%d minutes are equal to %d years and %d days", minutes, years, rem_days);
    return 0;
}
