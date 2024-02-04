/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoscript <ecoscript@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:45:45 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/03 23:18:13 by ecoscript        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '0', n);
}
 
/*
int main (void) 
{

    char s[6];
	ft_bzero(s, sizeof(s));
	
    printf("Resultado de ft_memset: %s\n", s);
	
    return 0;
}
*/

/******************************************************************************

The ft_bzero function writes zeros to a block of memory with 
an indicated number of bytes.

Parameters:
A pointer to the memory block.
The number of bytes to be set to zero.

Return:
This function does not return a value.

******************************************************************************/