/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:07:48 by kcanales          #+#    #+#             */
/*   Updated: 2024/08/28 22:07:51 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	char	str[] = "6875";
	char	str2[] = "6754buenas";
	int	a = ft_str_is_number(str);
	int	b = ft_str_is_number(str2);
	printf("frase a: %s\ncaso a: %d\n", str, a);
	printf("frase b: %s\ncaso b: %d\n", str2, b);
}*/