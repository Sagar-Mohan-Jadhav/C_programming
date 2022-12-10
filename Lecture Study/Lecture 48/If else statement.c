#include <stdio.h>

int main()
{
    int number1, number2, result;
    printf("Enter two numbers (seperated by white space).\n");
    scanf("%d %d", &number1, &number2);

    result = number1 % number2;
    if (result == 0)
    {
        printf("%d is divisible by %d\n", number1, number2);
    }
    else
    {
        printf("%d is not divisible by %d and remainder is %d\n", number1, number2, result);
    }
    return 0;
}
