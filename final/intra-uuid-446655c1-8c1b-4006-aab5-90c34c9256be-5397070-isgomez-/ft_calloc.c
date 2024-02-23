/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:53:28 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/05 23:13:51 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*memory;

	if (count > 0 && count * size / count != size)
		return (0);
	memory = malloc(size * count);
	if (memory == 0)
		return (0);
	ft_bzero(memory, (size * count));
	return (memory);
}

/*
int	main(void)

{
	size_t	count = 5;
	size_t	size = sizeof(int);

	int *arr = (int *)ft_calloc(count, size);

	if (arr != NULL)
	{
		printf("%p\n", arr);

		free(arr);
	}
	else
	{
		printf("Error en la asignación de memoria.\n");
	}

	return (0);
}
*/

/******************************************************************************

The ft_calloc function takes two parameters: count and n.
It first performs a check to ensure that the product of count and n
causes arithmetic overflow.
If the check fails, it returns NULL to indicate an error.
Call the malloc function to allocate memory to count *n bytes.
If memory allocation fails, malloc returns NULL and ft_calloc also
returns NULL to indicate an error.
If the memory allocation is successful, it performs additional checks
to handle the case where n is zero. If n is zero, it means that the size
of each element is zero, so ft_calloc directly returns the allocated memory
without initializing it.

Inputs:
The number of elements to assign.
The size of each element.

Return:
If the memory allocation is successful, a pointer to the allocated
memory block is returned.
If count o n is zero or memory allocation fails, NULL is returned.
******************************************************************************/