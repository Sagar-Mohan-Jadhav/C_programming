#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *str = (char *) calloc(25, sizeof(char));
    if (!str)
    {
        printf("Memory allocation failed.\n");
    }

    strcpy(str, "This is a biggest string.");
    printf("%s with address %p.\n", str, str);

    str = (char *) realloc(str, 45 * sizeof(char));
    if (!str)
    {
        printf("Memory allocation failed.\n");
    }

    strcat(str, " and some extension.");
    printf("%s with address %p.\n", str, str);

    free(str);

    return 0;
}
