/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:01:35 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/08 17:12:41 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i != n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main()
{
	char str1[] = "Hola Mundo";
	char str2[] = "Hola Mundo";
	int	funcionft = ft_strncmp(str1, str2, 11);
	int	funcion = strncmp(str1, str2, 11);
	//printf("\"%d\"\n\"%d\"\n", (int)s1[i], (int)s2[i]);  
	//Colocar dentro de ft_strncmp, antes del ultimo return
	
	printf("Return ft_strncmp: %d\n", funcionft);
	printf("Return strncmp(): %d\n", funcion);
}*/