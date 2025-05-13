
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main()
{
	char str[] = "Hola mundo";
	char a[] = {'H','o','l','a','\0','M','u','n','d','o','\0'};
	memset(a, 'a', 30);
	printf("%s\n", str);	
	printf("|%s|\n", a);
}