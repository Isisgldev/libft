/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:23:35 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/06 00:04:21 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
	{
		len = ft_strlen(s) - start;
	}
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

/*
int	main(void)
{
	const char	*str = "No es que no pueda recordar, es que no puedo olvidar.";
	char		*substring;

	substring = ft_substr(str, 28, 25);
	if (substring != NULL)
	{
		printf("Original: %s\n", str);
		printf("Subcadena: %s\n", substring);
		free(substring);
	}
	else
	{
		printf("Error al crear la subcadena.\n");
	}
}
*/

/******************************************************************************
The ft_substr function creates a substring from a given string.

Inputs:
A pointer to the source string.
The starting index of the substring in the source string.
The maximum length of the substring.

Return:
If memory allocation is successful or if len is zero, a pointer
to the allocated substring is returned.
If s is NULL or if memory allocation fails, NULL is returned.
******************************************************************************/