/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:54:12 by kcanales          #+#    #+#             */
/*   Updated: 2025/05/08 17:14:19 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int    main(void)
{
	char a[] = {'H','o','l','a','\0','M','u','n','d','o','\0'};
	char a2[] = "Holaáá";
	printf("String: %s\n", a);
	int b = strlen(a);
	printf("strlen(): %d\n", b);
	int c = ft_strlen(a);
	printf("ft_strln: %d\n", c);
}
*/
