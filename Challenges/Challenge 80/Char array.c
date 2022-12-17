#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int string_length(char in_string[50])
{
    int length = 0;
    while(in_string[length] != '\0')
    {
        ++length;
    }
    return length;
}

const char* string_join(char str1[50], char str2[50])
{
    int length1 = 0;
    static char joined_string[50];

    while (str1[length1] != '\0')
    {
        joined_string[length1] = str1[length1];
        ++length1;
    }
    int length2 = 0;
    while (str2[length2] != '\0')
    {
        joined_string[length1 + length2] = str2[length2];
        ++length2;
    }

    return joined_string;
}

bool compare_strings(char str1[50], char str2[50])
{
    bool strings_equal = true;
    int length = 0;
    while(str1[length] != '\0')
    {
        if (str1[length] != str2[length])
        {
            strings_equal = false;
            break;
        }
        ++length;
    }
    return strings_equal;
}

int main()
{
    char str1[50], str2[50], joined_string[50];
    int length;
    bool strings_equal;
    strcpy(str1, "This is a string.");
    strcpy(str2, "This is another string.");
    length = string_length(str1);
    printf("The length of %s string is %d.\n", str1, length);
    length = string_length(str2);
    printf("The length of %s string is %d.\n", str2, length);

    strcpy(joined_string, string_join(str1, str2));
    printf("The string \"%s\" and \"%s\" together form \"%s\" string.\n", str1, str2, joined_string);

    strings_equal = compare_strings(str1, str2);
    if (strings_equal)
    {
        printf("Both \"%s\" and \"%s\" are equal.\n", str1, str2);
    }
    else
    {
        printf("\"%s\" and \"%s\" are not equal.\n", str1, str2);
    }

    return 0;
}
