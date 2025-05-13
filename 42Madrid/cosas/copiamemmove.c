//#include "libft.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *) dest;
	src_ptr = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	
	unsigned int	int_dest;
	int_dest = (unsigned int * ) dest;
	printf("%d\n", int_dest);
	printf("%d\n", dest);

	if (dest_ptr == src_ptr)
		return (dest);
	if (dest > src)
	{
		dest_ptr += n;
		src_ptr += n;
		while (n)
		{
			dest_ptr--;
			src_ptr--;
			*dest_ptr = *src_ptr;
			n--;
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}





int main(void) {
    char texto[21] = "a shiny white sphere";

	printf("%s\n", texto[20]);
	printf("%s\n", texto[21]);
    printf("Antes de memmove: \"%s\"\n", texto);

    // Copiamos "shiny" (desde texto+2) a la posición texto+8
    ft_memmove(texto + 20, texto + 20, 5);

    printf("Después de memmove: \"%s\"\n", texto);

    return 0;
}

/*#include <stdio.h>
#include <string.h>

int main() {
    int numeros[6] = {1, 2, 3, 4, 5, 6};
	int	size = sizeof(int);
    // Queremos eliminar el número 3 (índice 2)
    // Desplazamos los elementos a la izquierda
    ft_memmove(&numeros[2], &numeros[3], 3 * sizeof(int));
    // Ahora el array es: 1, 2, 4, 5, 6, 6

    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}
*/