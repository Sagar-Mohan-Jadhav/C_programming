#include <stdio.h>

int main()
{
    struct employee
    {
        char name[100];
        struct hire_date
        {
            int day;
            int month;
            int year;
        };
        float salary;
    };

    struct employee sagar = {"Sagar", {8, 12, 2020}, 78.9};
    struct employee new_employee;
    printf("Enter the name of employee.\n");
    scanf("%s", new_employee.name);
    printf("Enter the date of hire in dd-mm-yyyy format.\n");
    scanf("%d-%d-%d", &new_employee.day, &new_employee.month, &new_employee.year);
    printf("Enter the salary.\n");
    scanf("%f", &new_employee.salary);

    printf("The name of first employee is %s. They started working in %d-%d-%d and the salary is %.2f.\n", sagar.name,
           sagar.day, sagar.month, sagar.year, sagar.salary);
    printf("The name of second employee is %s. They started working in %d-%d-%d and the salary is %.2f.\n", new_employee.name,
           new_employee.day, new_employee.month, new_employee.year, new_employee.salary);

    return 0;
}
