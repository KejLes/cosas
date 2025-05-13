#include <stdio.h>
#include <unistd.h>
#include <string.h>
 
int    main(void)
{
    char a[] = {'H','o','l','a','\0','M','u','n','d','o','\0'};
    int b = strlen(a);
    printf("String: %s\n", a);
    printf("El tamaño de esta string es: %d\n", b);

    int i = 0;
    while (a[i]!= '\0')
        i++;
    printf("Strln: %d\n", (i));
}

