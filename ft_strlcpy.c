/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:06:29 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/03 19:38:18 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{

	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
int main(void)
{
    char dest[25];
    const char *src = "Hello, World!";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Número de carácteres de la cadena: %zu\n", result);
    printf("Cadena de destino después con buffer de 25: %s\n", dest);

	return 0;
}
*/

/******************************************************************************
The ft_strlcpy function copies a string to a destination with a 
specific size limit given by us.

Parameters:
destination: a pointer to the destination string.
src: a pointer to the source string.
n: The size limit of the destination buffer.

Return:
The length of the source string.

Note: The function assumes that the destination buffer has enough space to 
accommodate at least 'n' characters plus the null terminator. 
Otherwise it may cause a buffer overflow.
******************************************************************************/