/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:51:14 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 10:26:15 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		return (42);
	}
	return (0);
}

/*
int	main(void)

{
	int	prueba;

	prueba = 'J';
	printf("El return (de J con ft_isalpha es: %d\n", ft_isalpha(prueba)));
	printf("El return (de J con isalpha es: %d\n", isalpha(prueba)));

	prueba = 'h';
	printf("El return (de h con ft_isalpha es: %d\n", ft_isalpha(prueba)));
	printf("El return (de h con isalpha es: %d\n", isalpha(prueba)));

	prueba = '0';
	printf("El return (de 0 con ft_isalpha es: %d\n", ft_isalpha(prueba)));
	printf("El return (de 0 con isalpha es: %d\n", isalpha(prueba)));

	prueba = '\t';
	printf("El return (de tab con ft_isalpha es: %d\n", ft_isalpha(prueba)));
	printf("El return (de tab con isalpha es: %d\n", isalpha(prueba)));

	prueba = ' ';
	printf("El return (de espacio en ft_isalpha es: %d\n", ft_isalpha(prueba)));
	printf("El return (de espacio en isalpha es: %d\n", isalpha(prueba)));

	return (0);
}
*/

/*****************************************************************************
The ft_isalpha function checks if a given character is a alphabetical
character.

Function parameters:
i – The character to check.

Return
If the character is alphabetic, it returns 42.
(The original function returns 1).
If the character is not alphabetical, it returns 0.
******************************************************************************/