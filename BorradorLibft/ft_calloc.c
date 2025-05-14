/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:29:57 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/14 15:18:57 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 
#include <stdlib.h> 

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n);
	return (ptr);
}

/*
int main(void)
{
    size_t n = 5;
    int *arr = (int *)ft_calloc(n, sizeof(int));
    if (!arr)
    {
        printf("Error: ft_calloc devolvió NULL\n");
        return 1;
    }
    // Imprime los valores para comprobar que están inicializados a cero
    for (size_t i = 0; i < n; i++)
        printf("arr[%zu] = %d\n", i, arr[i]);
    free(arr);
    return 0;
}*/