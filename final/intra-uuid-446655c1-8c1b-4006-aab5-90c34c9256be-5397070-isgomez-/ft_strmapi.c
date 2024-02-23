/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:44:18 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/06 10:57:13 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	transformador(unsigned int index, char c)
{
	if (index % 2 == 1)
	{
		return (ft_toupper(c));
	}
	else
	{
		return (c);
	}
}

int	main(void)
{
	const char	*cadena_original = "Si nadie te odia, estás haciendo algo mal";
	char		*cadena_transformada;

	cadena_transformada = ft_strmapi(cadena_original, transformador);
	printf("Cadena original: %s\n", cadena_original);
	printf("Con ft_toupper aplicado cada dos letras:%s\n", cadena_transformada);
	free(cadena_transformada);
	return (0);
}
*/

/******************************************************************************

The ft_strmapi function applies a function to each character in a string,
creating a new string with the results.

Input:
s: a pointer to the input string.
f – The function that applies to each character.
Takes an unsigned integer (the index) and a character as parameters, and
returns a new character based on the index and the input character.

Output:
A dynamically allocated string resulting from applying the function to each
character in the input string.
NULL is returned if memory allocation fails or if the string
input is NULL.
******************************************************************************/
