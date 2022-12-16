#include <stdio.h>

int main()
{
    char str[] = "This is a normal string.";
    int length;

    while(str[length] != '\0')
    {
        ++length;
    }
    printf("The string is \"%s\" of length %d.", str, length);
    return 0;
}
