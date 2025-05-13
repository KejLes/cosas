/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebaisalpha().c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:28:40 by kcanales          #+#    #+#             */
/*   Updated: 2025/04/24 12:45:38 by kcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
 
int    main(void)
{
    char a[] = "1";
    int b = isalpha(a[0]);
    if (b == 0)
        printf("no se pudo. %d", b);
    else
        printf("se pudo. %d", b);
    return 0;
}