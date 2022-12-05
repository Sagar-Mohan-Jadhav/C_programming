#include <stdio.h>

int main(int arg, char *arg1[])
{
    int number_of_arguments = arg;
    char *file_path = arg1[0];
    char *command_line_argument1 = arg1[1];
    char *command_line_argument2 = arg1[2];
    char *command_line_argument3 = arg1[3];

    printf("The number of arguments given by user are %d.\n", number_of_arguments);
    printf("The file path is %s.\n", file_path);
    printf("Given command line arguments are %s, %s, %s.\n", command_line_argument1,
           command_line_argument2, command_line_argument3);
    return 0;
}
