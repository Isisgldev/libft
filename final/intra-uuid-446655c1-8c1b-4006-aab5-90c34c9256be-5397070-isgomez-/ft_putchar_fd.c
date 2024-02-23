/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:18:38 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 16:47:28 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*

int	main(void)
{
	ft_putchar_fd('a', -1);
	ft_putchar_fd('a', 0);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('a', 2);
	ft_putchar_fd('a', 50);
	ft_putchar_fd('\0', 1);
	return (0);
}
*/

/******************************************************************************
The ft_putchar_fd function writes a single character to a specific file
descriptor.
It uses the write system call to send the character to the specified file
descriptor and does not return a value.

Input:
The character to write to the specified file descriptor.
The file descriptor to which the character will be written.

Output:
The ft_putchar_fd function does not return a value.
******************************************************************************/
