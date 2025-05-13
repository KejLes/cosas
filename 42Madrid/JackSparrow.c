#include <stdio.h>
#define SIZE 11

int main(void)
{
    char *ptr;
    char i[SIZE] = "Hola Mundo";
    *ptr = i;

    printf("%s", ptr);
}