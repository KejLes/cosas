/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebaisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:41:38 by kcanales          #+#    #+#             */
/*   Updated: 2025/04/24 12:52:26 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int    main(void)
{
    char a[] = "4";
    int b = isdigit(a[0]);
    if (b == 0)
        printf("no se pudo. %d", b);
    else
        printf("se pudo. %d", b);
    return 0;
}