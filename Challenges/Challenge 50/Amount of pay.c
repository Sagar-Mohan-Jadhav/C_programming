#include <stdio.h>

int main()
{
    int hrs;
    double net_pay, salary;
    printf("Enter the number of hrs you worked in week.\n");
    scanf("%d", &hrs);

    salary = 12*hrs;
    if (salary <= 300)
    {
        net_pay = salary*(1-0.15);
    }
    else if (salary <= 450)
    {
        net_pay = salary - (300)*(0.15) - (salary - 300)*(0.2);
    }
    else
    {
        net_pay = salary - (300)*(0.15) - (150)*(0.2) - (salary - 450)*(0.25);
    }
    printf("Your net salary is %.2f.\n", net_pay);
    return 0;
}
