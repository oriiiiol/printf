/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:38:25 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/06 20:38:25 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putdecim(int c)
{
    int a;

    a = 0;
    if (c == -2147483648)
        a += ft_putstr("-2147483648");
    else
    {
        if (c < 0)
        {
            c = c * -1;
            a += ft_putchar('-');
        }
        if (c > 9)
        {
           a += ft_putdecim(c / 10);
        }
        a += ft_putchar((c % 10) + '0');
    }
    return(a);
}

// int main()
// {
//     ft_putdecim(-42);
// }