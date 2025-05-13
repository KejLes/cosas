/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:41:28 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/07 13:11:21 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>


void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;
	unsigned char *ptr_src;

	int i;
	ptr_dest = (unsigned char * ) dest;
	ptr_src = (unsigned char * ) src;

	i = 0;


	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
		return (dest);
	}
	if (dest > src)
	{
		while (i < n)
		{
			ptr_dest[n-i-1] = ptr_src[n-i-1];
			i++;
		}
		return (dest);
		
	}
}


int main(void) {
    char texto[21] = "a shiny white sphere";
	char texto2[21] = "a shiny white sphere";
	char texto3[21] = "a shiny white sphere";
	
/*
	printf("%s\n", texto[20]);
	printf("%s\n", texto[21]);*/
    printf("Antes de memmove: \"%s\"\n", texto);

    // Copiamos "shiny" (desde texto+2) a la posición texto+8
    ft_memmove(texto + 2, texto + 8, 5);
    printf("Caso 1 de memmove: \"%s\"\n", texto);

	ft_memmove(texto2 + 8, texto2 + 2, 5);
	printf("Caso 2 de memmove: \"%s\"\n", texto2);
	
	ft_memmove(texto3, texto3, 5);
	printf("Caso 3 de memmove: \"%s\"\n", texto3);
	
	memmove(texto, texto, 5);
	printf("Caso de memmove(): \"%s\"\n", texto);
	
	memmove(texto2, texto2, 5);
	printf("Caso de memmove()2: \"%s\"\n", texto2);
	
	memmove(texto3, texto3, 5);
	printf("Caso de memmove()3: \"%s\"\n", texto3);


    return 0;
}
