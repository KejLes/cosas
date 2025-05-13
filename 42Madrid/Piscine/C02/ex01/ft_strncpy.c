/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:53:45 by kcanales          #+#    #+#             */
/*   Updated: 2024/08/26 17:53:50 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "Hola Mundo";
	char	b[] = "Y el raton se volvio intolerante a la lactosa";
	int	num = 6;
	ft_strncpy(b, a, num);
	printf("src: %s\n", a);
	printf("num de caracteres copiados: %d\n", num);
	printf("dest: %s\n", b);
}*/