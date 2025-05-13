#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main()
{
	char str[] = "Hola mundo";
	char str2[] = {  
  0, '\0', 1, '\x01', 2, '\x02', 3, '\x03', 4, '\x04', 5, '\x05',  
  6, '\x06', 7, '\a', 8, '\b', 9, '\t', 10, '\n', 11, '\v',  
  12, '\f', 13, '\r', 14, '\x0E', 15, '\x0F', 16, '\x10',  
  17, '\x11', 18, '\x12', 19, '\x13', 20, '\x14', 21, '\x15',  
  22, '\x16', 23, '\x17', 24, '\x18', 25, '\x19', 26, '\x1A',  
  27, '\x1B', 28, '\x1C', 29, '\x1D', 30, '\x1E', 31, '\x1F',  
  127, '\x7F'  
};  


	char str3[] = {  
  32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,  
  48, 49, 50, 51, 52, 53, 54, 55 
};  

	void *hello = memmove(str2, str3, 15);
	char *hello2 = (char *) hello;
	printf("|%s|\n", str2);

	printf("%d\n", *hello2);
	return 0;
}