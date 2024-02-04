/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:49:04 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/03 22:43:27 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *source, const char *search, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while (source[i] && search[j] && len > 0)
	{
		if (search[j] != source[i])
		{
			i++;
			len--;
		}
		else
		{
			size_t temp_i = i;
			while (search[j] == source[temp_i] && len > 0 && source[temp_i])
			{
				j++;
				temp_i++;
				len--;
			}

			if (search[j] == '\0')
				return ((char *)source + i);
			else
			{
				i++;
				j = 0;
				len = len + (temp_i - i);
			}
		}
	}
	return (NULL);
}

/*
int main(void)
{
    const char *source = "Nunca subestimes el poder de los incentivos";
    
    const char *search= "poder";
    int len = 20;

    char *result = ft_strnstr(source, search, len);

    if (result)
        printf("Subcadena encontrada: %s\n", result);
    else
        printf("Subcadena no encontrada\n");
        printf("Valor devuelto: %p\n", (void *)result);

    return 0;
}
*/

/******************************************************************************
The ft_strnstr function finds the first occurrence of a 
substring within a string, up to a length specified by us.

Imputs: 
Pointer to the string to search for.
Pointer to the substring to search for.
n: the maximum number of characters to search.

Return:
If the substring is found, a pointer to the first occurrence 
of the substring within the string is returned.
If the substring is not found or if n is zero, NULL is returned.

******************************************************************************/