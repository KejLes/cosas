/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:59:58 by kcanales          #+#    #+#             */
/*   Updated: 2024/08/27 16:00:00 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	str[] = "HolaBuenDia";
	char	str2[] = "holabuenas";
	int	a = ft_str_is_lowercase(str);
	int	b = ft_str_is_lowercase(str2);
	printf("frase a: %s\ncaso a: %d\n", str, a);
	printf("frase b: %s\ncaso b: %d\n", str2, b);
}*/