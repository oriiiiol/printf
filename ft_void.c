/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:51:00 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/14 19:51:00 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_void(void *ptr_num)
{
	unsigned long num; 
	char *str;
	int a;

	num = (unsigned long)ptr_num;
	str = ft_itoabase(num, "0123456789abcdef");
	a = ft_putstr(str);
	free(str);
	return(a);
}