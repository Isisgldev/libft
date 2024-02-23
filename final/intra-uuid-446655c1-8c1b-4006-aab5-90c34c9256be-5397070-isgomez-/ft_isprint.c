/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:09:44 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 10:26:59 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
	{
		return (42);
	}
	return (0);
}

/*
int main (void)
{
	int	prueba;

	prueba = 'p';
	printf("El return (de p con ft_isprint es: %d\n", ft_isprint(prueba)));
	printf("El return (de p con isprint es: %d\n", isprint(prueba)));
	prueba = 'J';
	printf("El return (de J con ft_isprint es: %d\n", ft_isprint(prueba)));
	printf("El return (de J con isprint es: %d\n", isprint(prueba)));
	prueba = '5';
	printf("El return (de 5 con ft_isprint es: %d\n", ft_isprint(prueba)));
	printf("El return (de 5 con isprint es: %d\n", isprint(prueba)));
	prueba = '\t';
	printf("El return (del tab con ft_isprint es: %d\n", ft_isprint(prueba)));
	printf("El return (tab con isprint es: %d\n", isprint(prueba)));
	prueba = ' ';
	printf("El return (de espacio en ft_isprint es: %d\n", ft_isprint(prueba)));
	printf("El return (de espacio en isprint es: %d\n", isprint(prueba)));
}
*/

/******************************************************************************
The ft_isprint function checks whether a given character is a
printable character or that is displayed on the screen.

Function parameters:
i – The character to check.

Return:
If the character is printable, it returns 42.
(The original function returns 1).
If the character is not printable, it returns 0.
******************************************************************************/