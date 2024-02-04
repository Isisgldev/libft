/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:20:16 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/03 14:54:12 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    while (*s != '\0' && *s != c)
        s++;

    if (*s == c) 
    { 
        return ((char *)s); 
    }
    return NULL;
}

/*
int main (void)
{

const char *s = "Yo preferiría, con mucho, ser feliz a tener razón.";
char buscar = 's';

 char *resultado = ft_strchr(s, buscar);

    if (resultado != NULL) 
    {
        printf("Se encontró '%c' en la posición de la cadena %ld.\n", 
        buscar, resultado - s);
    } 
    else 
    {
        printf("'%c' no se encontró en la cadena.\n", buscar);
    }
    return 0;
}
*/

/*****************************************************************************
The ft_strchr function finds the first occurrence of a specific character
in a character string (string).

This function takes two arguments, a pointer to a string(s) and
the character to search for in the string (char search)

The while loop (*s != '\0' && *s != c) loops through the string s until it finds
the searched character or reaches the end of the string. the pointer moves
forward with each s++ iteration.

If the loop exits because it has reached the end or the value of the pointer 
of s is equal to c, an evaluation is made. 
If the value of the pointer of s is equal to c then the return is the 
position of the character if it is not null (when it is reached)
at the end of the chain.
******************************************************************************/