/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:23:12 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/03 13:08:53 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int i)
{
    if (i >= 97  && i <= 122)
	{
		return (i - 32);
	} 
	return (i);
}

/*
int main (void)
{
	int prueba;

	prueba = 'p';
	printf("El valor de p con ft_toupper es: %c\n", ft_toupper(prueba));
	printf("El valor de p con toupper es: %c\n", toupper(prueba));

	prueba = 'J';
	printf("El valor de J con ft_toupper es: %c\n", ft_toupper(prueba));
	printf("El valor de J con toupper es: %c\n", toupper(prueba));

	prueba = '5';
	printf("El valor de 5 con ft_toupper es: %c\n", ft_toupper(prueba));
	printf("El valor de 5 con toupper es: %c\n", toupper(prueba));

	prueba = '\t';
	printf("El valor del tab en ft_toupper es: %c\n", ft_toupper(prueba));
	printf("El valor del tab en toupper es: %c\n", toupper(prueba));
	
	prueba = ' ';
	printf("El valor del espacio en ft_toupper es: %c\n", ft_toupper(prueba));
	printf("El valor del espacio en toupper es: %c\n", toupper(prueba));
}
*/

/******************************************************************************
The ft_toupper function converts a lowercase character to its
capitalized equivalent.

Function parameters:
i – The character to convert.

Return
The uppercase equivalent of the entered character, if it is a 
lowercase letter.
The input character itself, if not a lowercase letter.
******************************************************************************/
