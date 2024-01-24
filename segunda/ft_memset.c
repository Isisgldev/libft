/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:53:32 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/24 12:05:50 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*s;
	size_t  i;

	i = 0;
	s = ptr;
	while (i < n)
	{
		s[i] = (unsigned char)x;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main() 
{

    char *n;
    
    ft_memset(n, 'B', 10);
    printf("Resultado de ft_memset: %s\n", n);
    memset(n,'B', 10);
    printf("Resultado de memset: %s\n", n);

    return 0;
}
*/