/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:41:13 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 23:54:31 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
	}
}
/*
int	main(void)
{
	ft_putstr_fd("hola", -1);
	ft_putstr_fd("mundo", 0);
	ft_putstr_fd("hello", 1);
	ft_putstr_fd("world", 2);
	ft_putstr_fd("hallo", 50);
	ft_putstr_fd(NULL, 1);
	return (0);
}
*/

/******************************************************************************
The ft_putstr_fd function writes the contents of a string to the specified 
file descriptor. It uses the write system call to write the string to the 
file descriptor. The function assumes that the write operation will be 
successful and does not include explicit error handling.

Inputs:
A pointer to the string to be written.
The file descriptor where the string will be written.

Output:
None.
******************************************************************************/