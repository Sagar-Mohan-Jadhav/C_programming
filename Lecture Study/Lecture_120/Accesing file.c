#include <stdio.h>
#include <stdlib.h>

int main()
{
    // to read a file.
    FILE *pfile = NULL;
    char filename[100] = "Text_file.txt";
    pfile = fopen(filename, "r");  // to open file in read only mode.
    if (pfile == NULL)
    {
        printf("The file cannot be opened.\n");
    }
    int c;
    while ((c = fgetc(pfile)) != EOF)
    {
        printf("%c", c);
    }
    fclose(pfile);  // this is how you close the fle
    pfile = NULL;

    // to add data to file.
    pfile = fopen(filename, "a"); // to open file in append only mode.
    if (pfile == NULL)
    {
        printf("The file cannot be opened.\n");
    }
    fputs("\nthis is added later\n", pfile);
    fclose(pfile);
    pfile = NULL;

    // again reading the added data.
    pfile = fopen(filename, "r");
    if (pfile == NULL)
    {
        printf("The file cannot be opened.\n");
    }
    c = 0;
    while ((c = fgetc(pfile)) != EOF)
    {
        printf("%c", c);
    }
    fclose(pfile);
    pfile = NULL;

    // writing in a file (erases previous data)
    pfile = fopen(filename, "w+");
    if (pfile == NULL)
    {
        printf("The file cannot be opened.\n");
    }
    else
    {
        fputs("\nThis is new text2\n", pfile);
        char str[500];
        fgets(str, 10, pfile);
        printf("%s\n", str);
    }
    fclose(pfile);
    pfile = NULL;

    // getting the position of pointer in a file
    pfile = fopen(filename, "r");
    if (pfile == NULL)
    {
        printf("The file cannot be opened.\n");
    }
    else
    {
        int pos;
        fseek(pfile, 12, SEEK_SET); // goes to 12 th position in the string.
        pos = ftell(pfile); // gets the position of pointer.
        printf("The length of the string is %d.\n", pos);
    }
    fclose(pfile);
    pfile = NULL;


    return 0;
}
