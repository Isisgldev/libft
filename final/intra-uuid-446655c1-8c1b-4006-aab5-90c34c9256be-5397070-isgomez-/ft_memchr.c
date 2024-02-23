/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:24:28 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/05 10:27:13 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (unsigned char)c != ((unsigned char *)s)[i])
		i++;
	if (i == n)
		return (NULL);
	return ((void *)s + i);
}

/*
int	main(void) {

	char str[] = "Lo real sólo es una cuestión de percepción";
	char search_char = 'S';
	size_t search_len = 48;


	void *result_ft = ft_memchr(str, search_char, search_len);
	if (result_ft != NULL)
	{
		printf("ft_memchr: Valor encontrado en: %p\n", result_ft);

		printf("ft_memchr: Posición %zu, valor: %c\n",
		(size_t)((char*)result_ft - str), *(char*)result_ft);
	}
	else
	{
		printf("ft_memchr: No encontrado\n");
	}


	void *result_mem = memchr(str, search_char, search_len);
	if (result_mem != NULL)
	{
		printf("memchr: Valor encontrado en: %p\n", result_mem);

		printf("memchr: posición %zu, valor: %c\n",
		(size_t)((char*)result_mem - str), *(char*)result_mem);
	}
	else
	{
		printf("memchr: No encontrado\n");
	}

	return (0);
}
*/

/******************************************************************************

The ft_memchr function finds the first occurrence of a specific
character in a block of memory.

Parameters:
A pointer to the memory block.
The character to look for in the string
The number of bytes to search within the memory block.

return:
Pointer to the first occurrence of the character in the memory block.
NULL if the character is not found.

******************************************************************************/