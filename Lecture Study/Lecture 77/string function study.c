#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str1[40], str2[40], combination_of_strings[40];
    int str1_length, str2_length;
    bool same_str;
    // string copy
    strcpy(str1, "This is first string.");
    printf("%s\n", str1);
    strncpy(str2, "This is second string. Ignore this part", 22);
    printf("%s\n", str2);

    // string length
    str1_length = strlen(str1);
    printf("%d\n", str1_length);
    str2_length = strlen(str2);
    printf("%d\n", str2_length);

    // string compare when both are equal result is 0 and when not it is 1.
    same_str = strcmp(str1, str2);
    printf("%i\n", same_str);

    // string concatination.
    strcpy(combination_of_strings, strcat(str1, str2));
    printf("%s\n", combination_of_strings);
    return 0;
}
