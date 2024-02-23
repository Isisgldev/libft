/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:59:51 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 22:56:38 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_fd('-', fd);
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putnbr_fd(12, 1);
}
*/
/******************************************************************************

The function ft_putnbr_fd takes an integer 'n' and a file descriptor 'fd'
as parameters. Converts the integer 'n' to its decimal representation
and writes the result to the specified file descriptor.

Input:
n: the integer to be written.
fd: The file descriptor to write the integer to.

Return:
None.
******************************************************************************/