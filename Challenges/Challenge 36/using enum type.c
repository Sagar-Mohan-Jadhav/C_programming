#include <stdio.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company firma1, firma2, firma3;

    firma1 = XEROX;
    firma2 = GOOGLE;
    firma3 = EBAY;

    // giving output
    printf("%d\n%d\n%d", firma1, firma2, firma3);

    return 0;
}
