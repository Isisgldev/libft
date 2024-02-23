/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:56:10 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/05 10:32:45 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;

	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (i < len && ft_strchr(set, s1[len - 1]))
		len--;
	str = ft_substr(s1, i, len - i);
	return (str);
}

/*
int	main(void)
{
	const char	*s1 = "---test of ft_strtrim---";
	const char	*set = "-";
	char		*result;

	result = ft_strtrim(s1, set);
	if (result != NULL)
	{
		printf("Cadena original: \"%s\"\n", s1);
		printf("Conjunto a eliminar: \"%s\"\n", set);
		printf("Resultado: \"%s\"\n", result);
		free(result);
	}
	else
	{
		printf("Error al realizar la operación.\n");
	}
	return (0);
}
*/

/******************************************************************************

The ft_strtrim function trims leading and trailing characters from a
string based on a given set of characters.

Inputs:
A pointer to the string to be trimmed.
A pointer to the set of characters to be trimmed.

Return:
If memory allocation is successful and the resulting trimmed string is
not empty, a pointer to the trimmed string is returned.
If s1 or set is NULL, or if memory allocation fails, or if the resulting
trimmed string is empty, NULL is returned.

******************************************************************************/