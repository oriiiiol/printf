/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:00:15 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/13 20:00:15 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_type(const char c, va_list args)
{
	int a;

	a = 0;
	if (c == 'c')
		a = ft_putchar(va_arg(args, int));
	if (c == 's')
		a = ft_putstr(va_arg(args, char *));
	if (c == 'p')
		a = ft_void(va_arg(args, void *));
	if (c == 'd' || c == 'i')
		a = ft_putdecim(va_arg(args, int));
	if (c == 'u')
		a = ft_putdecimunsigned(va_arg(args, unsigned int));
	if (c == 'x')
		a = ft_printhex(va_arg(args, unsigned int), 'x');
	if (c == 'X')
		a = ft_printhex(va_arg(args, unsigned int), 'X');
	if (c == '%')
		a = ft_putporcent();
	return(a);
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int i = 0;
	int count;

	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if(str[i] == '%')
	    {
		    count = count + ft_type(str[i + 1], args);
		    i++;
	    }
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return(count);
}

// int main(void)
// {
//     int     numchar;
//     char    *s;
//     numchar = 0;
//     s = "Hola, me llamo ORIOL CHUPA POLLAS";
//     //Impresión sin argumentos:
//     printf("I: El número de caracteres impresos sin argumentos es: %d\n", ft_printf(""));
//     // printf("O: El número de caracteres impresos sin argumentos es: %d\n", printf(""));
//     //Impresión de un string sin argumentos:
//     numchar = ft_printf("String: 123456789\n");
//     printf("I: El número de caracteres impresos cuando hay un string es: %d\n", numchar);
//     printf("O: El número de caracteres impresos cuando hay un string es: %d\n", printf("String: 123456789\n"));
//     //Impresión de un carácter:
//     numchar = ft_printf("Carácter: %c\n", 'I');
//     numchar = printf("Carácter: %c\n", 'I');
//     //numchar = ft_printf("Carácter: %c\n", 'I');
//     //numchar = printf("Carácter: %c\n", 'I');
//     numchar = ft_printf("Carácter: %c %c\n", 'I', 'C');
//     printf("I: El número de caracteres impresos cuando hay un carácter es: %d\n", numchar);
//     printf("O: El número de caracteres impresos cuando hay un carácter es: %d\n", printf("Carácter: %c %c\n", 'I', 'C'));
//     //Impresión de un string como argumento:
//     numchar = ft_printf("String: %s %s\n", s, "y tengo 47 años");
//     printf("I: El número de caracteres impresos cuando hay un string es: %d\n", numchar);
//     printf("O: El número de caracteres impresos cuando hay un string es: %d\n", printf("String: %s %s\n", s, "y tengo 47 años"));
//     numchar = ft_printf("String: {%s}\n", "");
//     printf("I: El número de caracteres impresos cuando hay un string es: %d\n", numchar);
//     printf("O: El número de caracteres impresos cuando hay un string es: %d\n", printf("String: {%s}\n", ""));
//     //Impresión de un número entero/decimal (base 10) con signo:
//     numchar = ft_printf("Número decimal: %i\n", -134);
//     printf("I: El número de caracteres impresos cuando hay un decimal es: %d\n", numchar);
//     printf("O: El número de caracteres impresos cuando hay un decimal es: %d\n", printf("Número decimal: %d\n", -134));
//     numchar = ft_printf("I: Número decimal: %d\n", 134);
//     numchar = printf("O: Número decimal: %d\n", 134);
//     numchar = ft_printf("Número decimal sin signo: %u\n", 4294967295);
//     printf("I: El número de caracteres impresos cuando hay un decimal es: %d\n", numchar);
//     printf("O: El número de caracteres impresos cuando hay un decimal es: %d\n", printf("Número decimal sin signo: %lu\n", 4294967295));
//     //Impresión de un número hexadecimal (base 16):
//     numchar = ft_printf("Número hexadecimal: %x\n", 430);
//     printf("I: El número de caracteres impresos cuando hay un hexadecimal es: %d\n", numchar);
//     printf("O: El número de caracteres impresos cuando hay un hexadecimal es: %d\n", printf("Número hexadecimal: %x\n", 430));
//     numchar = ft_printf("Número hexadecimal en mayúsculas: %X\n", 430);
//     printf("I: El número de caracteres impresos cuando hay un hexadecimal es: %d\n", numchar);
//     printf("O: El número de caracteres impresos cuando hay un hexadecimal es: %d\n", printf("Número hexadecimal en mayúsculas: %X\n", 430));
//     numchar = ft_printf("I: Número hexadecimal: %x\n", 430);
//     numchar = printf("O: Número hexadecimal: %x\n", 430);
//     numchar = ft_printf("I: Número hexadecimal: %X\n", 430);
//     numchar = printf("O: Número hexadecimal: %X\n", 430);
//     numchar = ft_printf("I: Número : %x %x %x %xxxx %c\n", 430, 430,430,430,'A');
//     numchar = printf("I: Número : %x %x %x %xxxx %c\n", 430, 430,430,430,'A');
//     return 0;
// }
