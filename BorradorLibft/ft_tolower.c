/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:09:08 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/14 11:51:08 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c = c + 32;
	return (c);
}

/*
int	main(void)
{
	char	a;
	char	b;

	a = 'A';
	b = ft_toupper(a);
	printf("%c\n", b);
	return (0);
}
*/