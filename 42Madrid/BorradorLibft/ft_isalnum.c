/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:13:22 by kcanales          #+#    #+#             */
/*   Updated: 2025/04/24 13:19:29 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 0 && c <= 9))
        return (8);
    else
        return (0);
}

int    main(void)
{
    char a[] = "/";
    int b = ft_isalpha(a[0]);
    if (b == 0)
        printf("no se pudo. %d", b);
    else
        printf("se pudo. %d", b);
    return 0;
}