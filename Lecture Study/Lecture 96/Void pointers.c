#include <stdio.h>

int main()
{
    int num = 90;
    char word = 'h';
    float num1 = 78.87;

    void *pvar = NULL;
    pvar = &num;
    printf("The pointer pvar points to value %d.\n", *(int*)pvar);
    pvar = &word;
    printf("The pointer pvar points to value %c.\n", *(char*)pvar);
    pvar = &num1;
    printf("The pointer pvar points to value %.2f.\n", *(float*)pvar);

    return 0;
}
