/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:55:58 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/05 10:28:09 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest - src > 0)
	{
		while (len > 0)
		{
			len--;
			((char *)dest)[len] = ((char *)src)[len];
		}
		return (dest);
	}
	while (i < len)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	original[] = "I love this world!";
	size_t	len;
	char	dest[len+1];

	len = strlen(original);
	printf("Antes de la copia:\n");
	printf("original: %s\n", original);
	printf("dest: %s\n", dest);
	ft_memmove(dest, original, len + 1);
	printf("\nDespués de la copia:\n");
	printf("original: %s\n", original);
	printf("dest: %s\n", dest);
	return (0);
}
*/

/******************************************************************************

The ft_memmove function copies a block of memory from the source to the
destination, handling overlapping memory regions.

Inputs:
A pointer to the destination memory block.
A pointer to the source memory block.
The number of bytes to copy.

Return:
A pointer to the destination memory block.

******************************************************************************/