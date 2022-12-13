#include <stdio.h>

int main()
{
    float weather[5][12], average[5], sum[5], year_average;

    for (int count1 = 0; count1 <= 4; ++count1)
    {
        for (int count2 = 0; count2 <= 11; ++count2)
        {
            printf("Enter rainfall in %d th year and %d th month.\n", (count1 + 1), (count2 + 1));
            scanf("%f", &weather[count1][count2]);
        }
    }
    for (int count1 = 0; count1 <= 4; ++count1)
    {
        for (int count2 = 0; count2 <= 11; ++count2)
        {
            sum[count1] = sum[count1] + weather[count1][count2];
        }
        average[count1] = sum[count1]/12;
        year_average = year_average + sum[count1];
    }
    for (int count1 = 0; count1<= 4; ++count1)
    {
        printf("The year %d had average monthly rainfall of %.2f, with a total of %.2f.\n", (count1 + 1), (average[count1]), sum[count1]);
    }
    printf("The average yearly rainfall for past 5 years is %.2f\n", year_average/5);

    return 0;
}
