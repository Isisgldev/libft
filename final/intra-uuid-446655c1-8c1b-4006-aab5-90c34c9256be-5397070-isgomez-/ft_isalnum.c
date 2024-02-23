/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:52:27 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 10:26:00 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
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
	printf("El return (de p con ft_isalnum es: %d\n", ft_isalnum(prueba)));
	printf("El return (de p con isalnum es: %d\n", isalnum(prueba)));
	prueba = 'J';
	printf("El return (de J con ft_isalnum es: %d\n", ft_isalnum(prueba)));
	printf("El return (de J con isalnum es: %d\n", isalnum(prueba)));
	prueba = '5';
	printf("El return (de 5 con ft_isalnum es: %d\n", ft_isalnum(prueba)));
	printf("El return (de 5 con isalnum es: %d\n", isalnum(prueba)));
	prueba = '\t';
	printf("El return (del tab con ft_isalnum es: %d\n", ft_isalnum(prueba)));
	printf("El return (del tab con isalnum es: %d\n", isalnum(prueba)));
	prueba = ' ';
	printf("El return (de espacio con ft_isalnum es: %d\n",
		ft_isalnum(prueba)));
	printf("El return (de espacio con isalnum es: %d\n", isalnum(prueba)));
}
*/

/******************************************************************************
The ft_isalnum function checks whether a given character is a numeric or
alphabetic character.
Function parameters: i – The character to check.
Return: If the character is numeric or alphabetic, returns 42.
(The original function returns 1).
If the character is not numeric or alphabetic, it returns 0.
******************************************************************************/