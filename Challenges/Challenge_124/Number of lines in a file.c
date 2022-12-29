#include <stdio.h>
#include <stdbool.h>

int main()
{
    FILE *pfile;
    pfile = fopen("TextFile.txt", "r");
    if (false)
    {
        printf("The file could not be opened.\n");
    }
    else
    {
        int ch, len, count = 0, eof_count = 0;
        fseek(pfile, 0, SEEK_END);
        len = ftell(pfile);
        printf("The length of the text file is %d.\n",len);
        fseek(pfile, 0, SEEK_SET);
        while(count <= len)
        {
            if ((ch = fgetc(pfile)) == 13)
            {
                eof_count++;
            }
            count++;
        }
        printf("There are %d lines in the text file.\n", eof_count);
    }
    fclose(pfile);
    pfile = NULL;
    return 0;
}
