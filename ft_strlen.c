/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:44:03 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/03 16:08:15 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    
    while (str[i] != '\0')
        i++;
	return (i);  
}

/*

int main(void)
{
    char s[] = "El sentido de la vida, el universo y todo lo demás";
    printf("La longitud de la cadena es: %zu\n", ft_strlen(s));
}

*/

/*****************************************************************************
The ft_strlen function calculates the length of a string.

In this case it takes a pointer to a constant character string like
argument and returns a value of type size_t, which represents the length of
chain.

The function uses a while loop to iterate through the string until
finds the null character '\0', which marks the end of the string.

In each iteration, the variable 'i' is incremented to count the length of
chain.

Finally, the function returns the length of the string stored in the
variable 'i'.
******************************************************************************/