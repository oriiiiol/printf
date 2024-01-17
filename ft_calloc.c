/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:19:36 by ocollado          #+#    #+#             */
/*   Updated: 2023/11/14 20:19:36 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}

// int main()
// {
//     size_t num_elements = 5;
//     size_t element_size = sizeof(int);

//     int *arr = (int *)ft_calloc(num_elements, element_size);
//     if (arr)
//     {
//         for (size_t i = 0; i < num_elements; i++)
//         {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");

//         free(arr);
//     }
//     else
//     {
//         printf("Error: No se puede asignar memoria.\n");
//     }
//     return (0);
// }