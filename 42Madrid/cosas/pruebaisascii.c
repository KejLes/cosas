#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
 
int    main(void)
{
    char a[] = "á";
    int b = isascii(a[0]);
    if (b == 0)
        printf("no se pudo. %d", b);
    else
        printf("se pudo. %d", b);
    return 0;
}