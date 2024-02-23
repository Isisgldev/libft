/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:20:16 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 23:35:04 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

/*
int main (void)
{
const char	*s = "Yo preferiría, con mucho, ser feliz a tener razón.";
char		buscar = 's';
	char	*resultado;

 resultado = ft_strchr(s, buscar);
	if (resultado != NULL)
	{
		printf("Se encontró '%c' en la posición de la cadena %ld.\n",
		buscar, resultado - s);
	}
	else
	{
		printf("'%c' no se encontró en la cadena.\n", buscar);
	}
	return (0);
}
*/

/*****************************************************************************
The ft_strchr function finds the first occurrence of a specific character
in a character string (string).

This function takes two arguments, a pointer to a string(s) and
the character to search for in the string (char search)

The while loop (*s != '\0' && *s != c) loops through the string s until it finds
the searched character or reaches the end of the string. the pointer moves
forward with each s++ iteration.

If the loop exits because it has reached the end or the value of the pointer
of s is equal to c, an evaluation is made.
If the value of the pointer of s is equal to c then the return is the
position of the character if it is not null (when it is reached)
at the end of the chain.
******************************************************************************/