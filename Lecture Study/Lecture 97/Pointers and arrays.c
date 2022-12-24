#include<stdio.h>

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *ptr1;

    ptr1= arr;
    for (int count = 0; count<= 4; count++)
    {
        printf("%d\n", *(ptr1+count));
    }
    return 0;
}


