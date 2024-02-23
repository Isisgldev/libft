/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:21:07 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/05 10:27:49 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[25];

	printf("Antes de la copia:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("\nDespués de la copia:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("Valor return: %p\n", dest);
	return (0);
}
*/

/******************************************************************************

The ft_memcpy function copies a block of memory from one source to another.

Parameters
A pointer to the destination memory block.
A pointer to the source memory block.
n: the number of bytes to copy.

Return
A pointer to the destination memory block.

******************************************************************************/