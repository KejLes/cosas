/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:37:49 by kcanales          #+#    #+#             */
/*   Updated: 2025/04/28 17:43:53 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
*/

void    *ft_memset(void *s, int c, size_t n)
{
	char *str = (char *) s;
	char alpha = (char) c;
	int i = 0;

	while (i != n )
	{
		str[i] = alpha;
		i++;
	}
	
}

/*
int	main()
{
	char str[] = "Hola Mundo";
	
	ft_memset(str, 'a', 5); //probar en 2º arg: 'a', 3, 117 (u en ascii)
	printf("%s\n", str);
}
*/