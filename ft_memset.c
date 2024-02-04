/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:53:32 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/03 23:08:28 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
int main (void) 
{

    char ptr[6];
    
    ft_memset(ptr, 'B',sizeof(ptr));
    printf("Resultado de ft_memset: %s\n", ptr);
	printf("Valor devuelto: %p\n", ptr);
	
    return 0;
}
*/

/******************************************************************************

The ft_memset function fills a block of memory with a specific value.

Input:
A pointer to the block of memory to be filled.
The value I'm going to fill with.
The number of bytes to be set (number of letters).

Return:
A pointer to the memory block once it has been filled.

******************************************************************************/

