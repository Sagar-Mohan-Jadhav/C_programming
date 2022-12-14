#include <stdio.h>

int GCD(int x, int y)
{
    int result;
    if (x >= y)
    {
        result = x;
        x = y;
        y = result;
    }
    for (int count = x; count >= 0; --count)
    {
        if ((x % count == 0) &&(y % count == 0))
        {
            result = count;
            break;
        }
    }
    return result;
}

int main()
{
    int num1, num2, result1;
    printf("Enter two positive integers separated by white space.\n");
    scanf("%d %d", &num1, &num2);
    result1 = GCD(num1, num2);

    printf("The GCD of number %d and %d is %d", num1, num2, result1);
    return 0;
}
