/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:23:35 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/04 13:54:40 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	i = start;
	if (s==0)
		return (NULL);

    if (ft_strlen(s) < start)
		return (ft_strdup(""));
    
    if (s[i] == '\0' && len > 1)
		len = 1;
    
    while (s[i] != '\0')
		i++;
    
	if (len > (i - start))
		len = i - start;
	
    if ((dest = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	
    while (len > 0)
	{
		dest[i++] = s[start++];
		len--;
	}

	dest[i] = '\0';
	return (dest);
}

/*
int main(void) 
{
    
    const char *str = "No es que no pueda recordar, es que no puedo olvidar.";
    char *substring = ft_substr(str, 28, 25);
    
    if (substring != NULL) 
    {
        printf("Original: %s\n", str);
        printf("Subcadena: %s\n", substring);
        free(substring);
    } 
    else 
    {
        printf("Error al crear la subcadena.\n");
    }
}
*/

/******************************************************************************
The ft_substr function creates a substring from a given string.

Inputs:
A pointer to the source string.
The starting index of the substring in the source string.
The maximum length of the substring.

Return:
If memory allocation is successful or if len is zero, a pointer 
to the allocated substring is returned.
If s is NULL or if memory allocation fails, NULL is returned.
******************************************************************************/