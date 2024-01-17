/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:20:08 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/02 21:20:08 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putstr(char *str)
{
    int a;

    a = 0;
    if (!str)
        return(0);
    while (str[a] != '\0')
    {
        ft_putchar(str[a]);
        a++;
    }
    return(a);
}

// int main()
// {
//     ft_putstr("adios\n");
// }