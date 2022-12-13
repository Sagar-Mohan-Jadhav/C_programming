#include <stdio.h>

int main()
{
    int grades[5], sum = 0;
    float average;

    for (int count = 0; count<=4; ++count)
    {
        printf("Enter the grades of %d th subject.\n", (count + 1));
        scanf("%d", &grades[count]);
        sum = sum + grades[count];
    }

    average = sum/5;

    printf("The grades are- ");
    for (int count = 0; count<=4; ++count)
    {
        printf("%d ", grades[count]);
    }

    printf("\nThe result is %.2f.\n", average);
    return 0;
}
