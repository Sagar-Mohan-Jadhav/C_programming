#include <stdio.h>
#include <string.h>


const char* bubble_sort(char in_string[500])
{
    static char result[500];
    char comp_string[500] = " AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    int length_string = 0, result_count = 0;
    length_string = strlen(in_string);
    for (int count1 = 0; count1 <= (strlen(comp_string) - 1); ++count1)
    {
        for (int count2 = 0; count2 <= (length_string - 1); ++count2)
        {
            if (comp_string[count1] == in_string[count2])
            {
                result[result_count] = in_string[count2];
                ++result_count;
            }
        }
    }
    return result;
}

int main()
{
    char user_in[500], bubble_string[500];
    int string_length;
    printf("Enter a string.\n");
    scanf("%[^\n]", user_in);

    string_length = strlen(user_in);
    printf("The length of the string is %d.\n", string_length);
    strcpy(bubble_string, bubble_sort(user_in));
    printf("%s\n", bubble_string);
    return 0;
}
