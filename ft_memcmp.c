/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 01:01:16 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/04 02:03:05 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	i = 0;

	if (n == 0)
    {
		return (0);
    }
    
    while (i < n && ((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
    {
		i++;
    }
    
    if (i == n)
    {
		i--;
    }
    return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}

/*
int main(void) 
{    
    char str1[] = "No es que no pueda recordar, es que no puedo olvidar.";
    char str2[] = "Tus emociones te hacen débil.";

    size_t n = 54;

    int result_ft = ft_memcmp(str1, str2, n);
    
    if (result_ft == 0)
    {
        printf("ft_memcmp: Las áreas de memoria son iguales.\n");
    } 
    else if (result_ft < 0) 
    {
        printf("ft_memcmp: str1 es menor que str2.\n");
    } 
    else 
    {
        printf("ft_memcmp: str1 es mayor que str2.\n");
    }

    int result_mem = memcmp(str1, str2, n);
    if (result_mem == 0) 
    {
        printf("memcmp: Las áreas de memoria son iguales.\n");
    } 
    else if (result_mem < 0) 
    {
        printf("memcmp: str1 es menor que str2.\n");
    } 
    else 
    {
        printf("memcmp: str1 es mayor que str2.\n");
    }

    return 0;
}
*/

/******************************************************************************

The ft_memcmp function compares two memory areas and returns the difference 
between the first different byte, if any, or 0 if the memory areas are equal.

Inputs:
A pointer to the first memory area.
A pointer to the second memory area.
The number of bytes to compare.

Return:
An integer value indicating the result of the comparison.
0 if the memory areas are equal.
A positive value if the first different byte in s1 is greater than 
the corresponding byte in s2. 
A negative value if the first different byte in s1 is less than the 
corresponding byte in s2.
******************************************************************************/