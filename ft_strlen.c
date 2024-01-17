/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:29:35 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/07 20:29:35 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_strlen(char *c)
{
    int a;

    a = 0;
    while (c[a])
        a++;
    return(a);
}

// int main()
// {
//     char cadena[20] = "hhola";
//     int longitud = ft_strlen(cadena);

//     printf("Longitud: %d\n", longitud);

//     return 0;
// }