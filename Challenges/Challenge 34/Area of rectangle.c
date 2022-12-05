#include <stdio.h>

int main()
{
    double width, height, perimeter, area;

    //taking user inputs.
    printf("Enter the width of rectangle= ");
    scanf("%lf", &width);
    printf("\nEnter the height of rectangle= ");
    scanf("%lf", &height);

    //calculating perimeter and area of rectangle.
    perimeter = 2*(width + height);
    area = width*height;

    //Displaying the outputs.
    printf("\nThe perimeter of rectangle is= %.2lf\n", perimeter);
    printf("The area of rectangle is= %.2lf\n", area);

    return 0;
}
