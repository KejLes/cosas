#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 'a';

	char b = toupper(a);
	printf("%c\n", b);
	return 0;
}