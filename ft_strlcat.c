/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:40:45 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/03 22:43:04 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;

	if (dstsize < i)
	{
		while (src[j])
			j++;
		return (dstsize + j);
	}

	while (dstsize > 0 && i < dstsize - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	
    while (src[j++])
		i++;
	return (i);
}

/*
int main(void) 

{ 
    char dest[13] = "Hola, ";
    const char src[] = "mundo!";

    size_t result = ft_strlcat(dest, src, sizeof(dest));

    printf("Cadena resultante: %s\n", dest);
    printf("Total de caracteres de las dos cadenas: %zu\n",
    result);

    return 0;
}
*/

/******************************************************************************

The ft_strlcat function concatenates a string to an input string, with a 
specified size limit, ensuring proper null termination.

Parameters
A pointer to the destination string.
A pointer to the source string.
The size limit of the destination buffer.

Return
The total length of the concatenated string.

Note: The function assumes that the destination buffer has enough space to 
append at least 'n' characters plus the null terminator to the string. 
Otherwise it may cause a buffer overflow.

******************************************************************************/