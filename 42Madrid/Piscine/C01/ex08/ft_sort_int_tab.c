/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:38:24 by kcanales          #+#    #+#             */
/*   Updated: 2024/08/20 14:43:10 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;
	int	ciclos;

	i = 0;
	j = 1;
	ciclos = 0;
	while (ciclos < (((size - 1) * (size - 1)) - (size - 2)))
	{
		if (tab[i] > tab[j])
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
		}
		i++;
		j++;
		ciclos++;
		if (j == size)
		{
			i = 0;
			j = 1;
		}
	}
}
/*

printf("número de bucles : %d\n", ciclos);

int	main(void)
{
	int	a[] = {5, 4, 3, 2, 1};
	ft_sort_int_tab(a, 5);
	for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}*/
