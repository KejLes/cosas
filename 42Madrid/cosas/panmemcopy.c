#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char str[] = "Hola mundo123456";
	char str2[] = "Adios tierra";
	memcpy (str2, str, 18);
	printf("%s\n", str2);
}