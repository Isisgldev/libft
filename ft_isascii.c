/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:49:55 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/02 12:27:39 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int i)
{
    if (i >= 0 && i <= 127) 
	{
		return 42;
	}
	return 0;
}

/*

int main (void)

{
	int prueba;

	prueba = 'p';
	
	printf("El return de p con ft_isascii es: %d\n", ft_isascii(prueba));
	printf("El return de p con isascii es: %d\n", isascii(prueba));

	prueba = 'J';
	printf("El return de J con ft_isascii es: %d\n", ft_isascii(prueba));
	printf("El return de J con isascii es: %d\n", isascii(prueba));

	prueba = '5';
	printf("El return de 5 con ft_isascii es: %d\n", ft_isascii(prueba));
	printf("El return de 5 con isascii es: %d\n", isascii(prueba));

	prueba = '\t';
	printf("El return del tab con ft_isascii es: %d\n", ft_isascii(prueba));
	printf("El return con tab con isascii es: %d\n", isascii(prueba));
	
	prueba = ' ';
	printf("El return de espacio en ft_isascii es: %d\n", ft_isascii(prueba));
	printf("El return de espacio en isascii es: %d\n", isascii(prueba));

	prueba = -5;
	printf("El return de -5 con ft_isascii es: %d\n", ft_isascii(prueba));
	printf("El return de -5 con isascii es: %d\n", isascii(prueba));

	prueba = 155;
	printf("El return de 155 con ft_isascii es: %d\n", ft_isascii(prueba));
	printf("El return de 155 con isascii es: %d\n", isascii(prueba));
}

*/

/******************************************************************************
The ft_isascii function checks whether a given character is within the
ascii range (0-127).

Function parameters:
i – The character to check.

Return:
If the character is part of ascii, it returns 42. (The original function
returns 1).
If the character is not ascii, it returns 0.
******************************************************************************/