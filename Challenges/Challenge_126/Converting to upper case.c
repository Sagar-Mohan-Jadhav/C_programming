#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *pfile;
    pfile = fopen("temp_text.txt", "r");

    char temp_text[500], perm_text[500];
    int char_count, count = 0, ch;

    fseek(pfile, 0, SEEK_END);
    char_count = ftell(pfile);
    fseek(pfile, 0, SEEK_SET);

    fread(temp_text, sizeof(char), char_count, pfile);
    printf("This is old text.\n\n");
    printf("%s\n", temp_text);
    fclose(pfile);
    pfile = NULL;
    pfile = fopen("perm_text.txt", "w");

    while (count <= (char_count- 1))
    {
        ch = temp_text[count];
        if (islower(ch))
        {
            fputc(ch - 32, pfile);
        }
        else
        {
            fputc(ch, pfile);
        }
        count++;
    }
    fclose(pfile);
    pfile = NULL;

    pfile = fopen("perm_text.txt", "r");


    fseek(pfile, 0, SEEK_END);
    char_count = ftell(pfile);
    fseek(pfile, 0, SEEK_SET);

    fread(perm_text, sizeof(char), char_count, pfile);
    printf("\n\nThis is new text.\n\n");
    printf("%s\n", perm_text);
    fclose(pfile);
    pfile = NULL;
    return 0;
}
