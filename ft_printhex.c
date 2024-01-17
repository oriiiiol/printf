/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmayus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:03:57 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/09 19:03:57 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

void	put_hex(unsigned int num, const char conversion)
{
	if (num >= 16)
	{
		put_hex(num / 16, conversion);
		put_hex(num % 16, conversion);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (conversion == 'x')
				ft_putchar(num - 10 + 'a');
			if (conversion == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_printhex(unsigned int num, const char conversion)
{
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
		put_hex(num, conversion);
	return (hex_len(num));
}

// int main()
// {
//     unsigned int number = 255;
//     const char conversion = 'x'; 

//     printf("Longitud en hexadecimal: %d\n", hex_len(number));

//     printf("Número en hexadecimal: ");
//     int length = print_hex(number, conversion);

//     printf("\nLongitud devuelta por hex: %d\n", length);

//     return 0;
// }