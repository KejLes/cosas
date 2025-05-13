/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:43:44 by kcanales          #+#    #+#             */
/*   Updated: 2024/08/28 18:43:46 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_charupcase(char *str, int *i)
{
	if (str[*i] >= 'a' && str[*i] <= 'z')
		str[*i] = str[*i] - 32;
}

/*Si la palabra de atras es una letra o un número, 
se seguirá comprobando con los siguientes caracteres,
 si esdistinto a una letra o un número, significara que
  esa letra es la primera de la palabra, se le pondrá 
  mayusucla*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9')))
		ft_charupcase(str, &i);
	i++;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			ft_charupcase(str, &i);
		i++;
	}
	return (str);
}
//si es distinto a un caracter de una palabra, se hace mayuscula
/*
int	main(void)
{
	char	str[] = {"salut, comment tu vas ? 42mots"};
	printf("before: <%s>\n", str);
	printf("after: <%s>", ft_strcapitalize(str));
}
*/