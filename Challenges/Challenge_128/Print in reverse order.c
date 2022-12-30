#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pfile;
    pfile = fopen("text_file.txt", "r");

    char old_text[500], new_text[500];
    int char_count;

    fseek(pfile, 0, SEEK_END);
    char_count = ftell(pfile);
    fseek(pfile, 0, SEEK_SET);

    fread(old_text, sizeof(char), char_count, pfile);
    printf("This is old text.\n\n");
    printf("%s\n\n\n", old_text);
    fclose(pfile);
    pfile = NULL;

    pfile = fopen("reverse_text_file.txt", "w");

    for (int count = 1; count < char_count; count++)
    {
        new_text[count] = old_text[char_count - count];
    }
    printf("The new text is\n\n%s.\n", new_text);
    fputs(new_text, pfile);

    fclose(pfile);
    pfile = NULL;

    return 0;
}
