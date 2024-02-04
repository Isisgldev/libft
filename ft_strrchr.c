/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:58:02 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/03 14:58:14 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*aux;

	aux = NULL;
	while (*str)
	{
		if (*str == (char)c)
			aux = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)aux);
}

/*
int main(void) {
    const char *cadena = "Hello, World!";
    int buscar = 'l';

    char *resultado = ft_strrchr(cadena, buscar);

    if (resultado != NULL) 
	{
        printf("la última aparición de '%c' es en la posición %ld.\n", 
		(char)buscar, resultado - cadena);
		printf("Resultado strrchr: Se encontró '%c' en la posición %ld.\n", 
		(char)buscar, resultado - cadena);
    } 
	else 
	{
        printf("'%c' no se encontró en la cadena.\n", (char)buscar);
    }

    return (0);
}
*/

/*****************************************************************************
The ft_strrchr function finds the last occurrence of a character in a string,
returning a pointer to that position. if the character is not present in the
string function returns a NULL pointer.

To achieve this, the function uses an auxiliary pointer to perform the
Tracking the last occurrence found while traversing the chain.

The inputs to the function are a string and a character to search for.

******************************************************************************/