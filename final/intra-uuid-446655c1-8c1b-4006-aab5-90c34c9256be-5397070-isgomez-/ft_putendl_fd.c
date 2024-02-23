/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:58:57 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 17:41:15 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	ft_putendl_fd("hola", -1);
	ft_putendl_fd("hola", 1);
	ft_putendl_fd("hola", 50);
	ft_putendl_fd(NULL, 1);
	return (0);
}
*/

/******************************************************************************

The ft_putendl_fd function writes the contents of a string to the specified
file descriptor, followed by a newline character ('\n'). It uses the write
system call to write the string and newline character to the file descriptor.
The function assumes that the write operation will be successful and does
not include explicit error handling.

Input:
A pointer to the string to be written.
The descriptor of the file where the string will be written.

Output:
None.

******************************************************************************/