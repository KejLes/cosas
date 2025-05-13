
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>

int	main()
{
	char str[] = "Hola mundo";
	char str2[] = {'H','o','l','a','\0','M','u','n','d','o','\0'};

	bzero(str2, 4);
}