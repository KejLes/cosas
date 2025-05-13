/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:15:03 by kcanales          #+#    #+#             */
/*   Updated: 2024/08/28 19:15:05 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "HOLA";
	char	str2[] = "holabuenas";
	int	a = ft_str_is_uppercase(str);
	int	b = ft_str_is_uppercase(str2);
	printf("frase a: %s\ncaso a: %d\n", str, a);
	printf("frase b: %s\ncaso b: %d\n", str2, b);
}*/