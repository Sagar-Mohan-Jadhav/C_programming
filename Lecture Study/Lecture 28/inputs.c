#include <stdio.h>

int main()
{
    int age;
    char name[100];
    double grade;
    printf("Hello, Enter your age, your name and grade separated by white space: ");
    scanf("%d %s %lf", &age, name, &grade);
    printf("Welcome %s, your age is %d and your grade is %lf", name, age, grade);
    return 0;
}
