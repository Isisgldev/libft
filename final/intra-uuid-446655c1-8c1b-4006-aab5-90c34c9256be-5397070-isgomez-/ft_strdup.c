/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:01:22 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/05 12:42:02 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		dest[i] = s1[i];
		i--;
	}
	return (dest);
}

/*

char transformador(unsigned int index, char c) {
    // Aplicar ft_toupper solo a cada segundo carácter (índices pares)
    if (index % 2 == 1) {
        return ft_toupper(c);
    } else {
        return c;
    }
}

int	main(void)
{
	const char	*str = "Lo real sólo es una cuestión de percepción.";
	char		*duplicate;

	duplicate = ft_strdup(str);
	if (duplicate != NULL)
	{
		printf("Original: %s\n", str);
		printf("Puntero: %p\n", str);
		printf("Duplicado: %s\n", duplicate);
		printf("Puntero: %p\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Error al duplicar la cadena.\n");
	}
}
*/

/******************************************************************************

A pointer to the newly allocated duplicate string. If memory allocation fails,
the function returns NULL.
The ft_strdup function takes a pointer to a source string src as a parameter.
The function then dynamically allocates memory for the duplicate (dest)
string using the malloc function. If memory allocation fails, the function
immediately returns NULL.
If the memory allocation succeeds, the function copies the contents of the
source string to the newly allocated memory.
Finally, the function returns a pointer to the beginning of the duplicate
string.

Inputs:
A pointer to the null-terminated source string to be duplicated.

Return:
A pointer to the newly allocated duplicate string.
If memory allocation fails, the function returns NULL.
******************************************************************************/