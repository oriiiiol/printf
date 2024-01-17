/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:11:46 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/02 21:11:46 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include <stdarg.h>

int ft_putchar(int c);
int ft_putstr(char *str);
void    ft_putint(int c);
int ft_putdecim(int c);
int ft_putdecimunsigned(unsigned int c);
int ft_strlen(char *c);
int	ft_printhex(unsigned int num, const char conversion);
int ft_putporcent(void);
char	*ft_itoabase(unsigned long long n, char *base);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t count);
int	ft_void(void *ptr_num);
int ft_type(const char c, va_list args);
int ft_printf(const char *str, ...);

#endif