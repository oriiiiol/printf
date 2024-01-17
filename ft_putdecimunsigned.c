/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimunsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:04:31 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/07 20:04:31 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putdecimunsigned(unsigned int c)
{
    int a;
    
    a = 0;
    if (c > 10)
    {
        a += ft_putdecimunsigned(c / 10);
        c = c % 10;
    }
    a += ft_putchar(c + '0');
    return(a);
}

// int main()
// {
//     ft_putdecimunsigned(42);
//     printf("num%u",42);
// }