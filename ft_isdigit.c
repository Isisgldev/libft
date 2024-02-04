/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:00:19 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/02 12:27:42 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return 42;
	}
	return 0;
}

/*
int	main(void)

{
	int	prueba;

	prueba = 'J';
	printf("El return de J con ft_isdigit es: %d\n", ft_isdigit(prueba));
	printf("El return de J con isdigit es: %d\n", isdigit(prueba));

	prueba = 'p';
	printf("El return de p con ft_isdigit es: %d\n", ft_isdigit(prueba));
	printf("El return de p con isdigit es: %d\n", isdigit(prueba));

	prueba = '5';
	printf("El return de 5 con ft_isdigit es: %d\n", ft_isdigit(prueba));
	printf("El return de 5 con isdigit es: %d\n", isdigit(prueba));

	prueba = '\t';
	printf("El return del tab con ft_isdigit es: %d\n", ft_isdigit(prueba));
	printf("El return del tab con isdigit es: %d\n", isdigit(prueba));
	
	prueba = ' ';
	printf("El return de espacio en ft_isdigit es: %d\n", ft_isdigit(prueba));
	printf("El return de espacio en isdigit es: %d\n", isdigit(prueba));

	return (0);
}
*/

/******************************************************************************
The ft_isdigit function checks whether a given character is a
numeric character.

Function parameters:
i – The character to check.

Return:
If the character is numeric, it returns 42. 
(The original function returns 1).
If the character is not numeric, it returns 0.
******************************************************************************/