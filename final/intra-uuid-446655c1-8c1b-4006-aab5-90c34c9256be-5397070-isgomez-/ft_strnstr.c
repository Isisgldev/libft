/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:49:04 by ecoscript         #+#    #+#             */
/*   Updated: 2024/02/05 23:06:48 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	const char	*haystack = "Nunca subestimes el poder de los incentivos";
	int			len;
	char		*result;

	const char *needle= "poder";
	len = 20;
	result = ft_strnstr(haystack, needle, len);
	if (result)
		printf("Subcadena encontrada: %s\n", result);
	else
		printf("Subcadena no encontrada\n");
		printf("Valor devuelto: %p\n", (void *)result);
	return (0);
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