/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:48:07 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 16:06:25 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*
static void	ft_print(unsigned int index, char *c)
{
	printf("%d %s\n", index, c);
}

int	main(void)
{
	char	*o;

	o = "HOLA 42";
	ft_striteri(o, &ft_print);
	return (0);
}
*/

/******************************************************************************
The ft_striteri function applies a function to each character of a string,
providing the index and a pointer to the character.
The function operates directly on the input string and modifies it
in place. There is no return value.

Inputs:
A pointer to the string to be iterated over.
The function to be applied to each character.
It takes an unsigned integer (the index) and a pointer to a character as
parameters, and performs some operation on the character.

Return:
None.
******************************************************************************/