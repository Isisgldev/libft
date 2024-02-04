/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:43:12 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/03 16:03:50 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n)

{
	size_t  i;

    i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		else if (s1[i] == '\0')
			return (0);
        i++;
	}
	return (0);
}

/*
int main (void)
{
const char *s1  = "hello";
const char *s2 = "hello world";
int n = 9;
    int resultado = ft_strncmp(s1, s2, n);
    
    if (resultado == 0) 
    {
        printf("Las n letras son iguales. %d\n", resultado);
    } 
    else if (resultado < 0) 
    {
        printf("La cadena1 es mas pequeña que la cadena2. %d\n", resultado);
    }
    else 
    {
        printf("La cadena1 es mas grande que la cadena2. %d\n", resultado);
    }
    
    return 0;
}
*/

/******************************************************************************

The strncmp function compares the first n characters of the strings s1 and s2. 
To do this, it iterates the characters of s1 and s2 using a while loop, 
checking if they are equal and if n is greater than 1.


Parameters
s1 – A pointer to the first string.
s2 – A pointer to the second string.
n – The maximum number of characters to compare.

return
If the strings are equal, 0 is returned.
If s1 is less than s2, a negative value is returned.
If s1 is greater than s2, a positive value is returned.

The result is the subtraction of the ascii values of the last compared 
characters of string one minus two.
******************************************************************************/