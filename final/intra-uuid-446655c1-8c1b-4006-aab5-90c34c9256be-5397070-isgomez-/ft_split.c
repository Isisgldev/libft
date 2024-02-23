/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:38:25 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/06 10:47:20 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static size_t	ft_wordsize(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_memorymaker(char **str, char *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len = ft_wordsize(&s[i], c);
			str[j] = ft_substr(&s[i], 0, len);
			if (str[j] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
			i += len;
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	words = malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!words || !s)
		return (NULL);
	return (ft_memorymaker(words, (char *)s, c));
}
/*
int	main(void)
{
	const char	*o = "Lo real sólo es una cuestión de percepción.";
	char		**sp;
	int			i;
	const char	*o2 = "  Lo real  sólo   es   una   cuestión  de  percepción.";
	char		**sp2;

	i = 0;
	sp = ft_split(o, ' ');
	while (sp[i] != NULL)
	{
		printf("%s\n", sp[i]);
		i++;
	}
	sp2 = ft_split(o2, ' ');
	i = 0;
	while (sp2[i] != NULL)
	{
		printf("%s\n", sp2[i]);
		i++;
	}
	return (0);
}
*/

/******************************************************************************

The ft_split function splits a string into an array of substrings based
on a delimiter character.

Inputs:
pointer to the string to be split.
delimiter character used to split the string.

Outputs:
A dynamically allocated array of strings that represents the split substrings.
The last element of the array is set to NULL.
NULL if memory allocation fails or 's' is NULL.
******************************************************************************/