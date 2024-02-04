/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:55:29 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/04 15:35:05 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
    
    if (s1 == NULL || s2 == NULL)
        return (NULL);

    while (s1[i]) 
        i++;
    
    while (s2[j])
		j++;
	
    if ((dest = malloc(sizeof(char) * (i + j + 1))) == NULL)
		return (NULL);
	
    i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	
    j = 0;
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = s2[j];
	
    return (dest);
}

/*
int main(void) 
{
    const char *str1 = 
    "Todos somos buenos pretendiendo que la soledad no está ahí,";
    const char *str2 = 
    "Y después viene algo para recordarnoslo.";
    
    char *result = ft_strjoin(str1, str2);

    if (result != NULL) 
    {
        printf("Cadena 1: %s\n", str1);
        printf("Cadena 2: %s\n", str2);
        printf("Concatenación: %s\n", result);
        free(result);
    } 
    else 
    {
        printf("Error al concatenar cadenas.\n");
    }
    return 0;
}
*/

/******************************************************************************

The ft_strjoin function takes two parameters: a pointer to a string to be 
extended and a pointer to a string with the content to be added.
It first calculates the lengths of the strings then allocates the memory size 
needed for the result string and finally concatenates the two strings.

input
a pointer to the initial string containing the content to be expanded.
a pointer to the string with the phrase you will add to the end of the 
previous string.

return
A pointer to a newly allocated string, which is the result of concatenating 
the buffer and the content. If memory allocation fails,
the function returns NULL.

******************************************************************************/