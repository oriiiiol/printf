/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:10:41 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/15 19:10:41 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_bzero(void *s, size_t count)
{
	size_t	a;

	a = 0;
	while (a < count)
	{
		((char *)s)[a] = 0;
		a++;
	}
}

// int main()
// {
//     char buffer[10];
//     strncpy(buffer, "Hello, C!", sizeof(buffer));

//     printf("Antes: %s\n", buffer);
//     ft_bzero(buffer, sizeof(buffer));
//     printf("Después: %s\n", buffer);
//     return (0);
// }