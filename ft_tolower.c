/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:19:01 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/03 13:02:58 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
	{
		return (i + 32);
	}
	return i;
}

/*
int main (void)
{
	int prueba;

	prueba = 'p';
	printf("El return de p con ft_tolower es: %c\n", ft_tolower(prueba));
	printf("El return de p con tolower es: %c\n", tolower(prueba));

	prueba = 'Z';
	printf("El return de Z con ft_tolower es: %c\n", ft_tolower(prueba));
	printf("El return de Z con tolower es: %c\n", tolower(prueba));

	prueba = '5';
	printf("El return de 5 con ft_tolower es: %c\n", ft_tolower(prueba));
	printf("El return de 5 con tolower es: %c\n", tolower(prueba));

	prueba = '\t';
	printf("El return del tab en ft_tolower es: %c\n", ft_tolower(prueba));
	printf("El return del tab en tolower es: %c\n", tolower(prueba));
	
	prueba = ' ';
	printf("El return de espacio en ft_tolower es: %c\n", ft_tolower(prueba));
	printf("El return de espacio en tolower es: %c\n", tolower(prueba));
}
*/

/******************************************************************************
The ft_tolower function converts an uppercase character to 
its lowercase equivalent.
Function parameters:
i – The character to convert.
Return:
The lowercase equivalent of the entered character,
if it is an uppercase letter. 
The input character itself, if not a capital letter.
******************************************************************************/