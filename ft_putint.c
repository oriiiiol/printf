/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:05:27 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/06 20:05:27 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_putint(int c)
{
    if (c == -2147483648)
        ft_putstr("-2147483648");
    else
    {
        if (c < 0)
        {
            c = c * -1;
            ft_putchar('-');
        }
        if (c > 9)
        {
            ft_putint(c / 10);
        }
        ft_putchar((c % 10) + '0');
    }
}

// int main()
// {
//     ft_putint(-42);
// }