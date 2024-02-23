/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:06:57 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 11:43:11 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static long long	abs_val(long long n)
{
	long long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = nbr_len(n);
	str = str_new(len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	nbr = abs_val(n);
	while (len--)
	{
		*(str + len) = 48 + nbr % 10;
		nbr /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}
/*
int	main(void)
{
	char	*result;

	result = ft_itoa(12345);
	printf("Número: 12345\nCadena: %s\n\n", result);
	free(result);
	result = ft_itoa(-456);
	printf("Número: -456\nCadena: %s\n\n", result);
	free(result);
	result = ft_itoa(0);
	printf("Número: 0\nCadena: %s\n\n", result);
	free(result);
	result = ft_itoa(2147483647);
	printf("Número: 2147483647\nCadena: %s\n\n", result);
	free(result);
	result = ft_itoa(-2147483648);
	printf("Número: -2147483648\nCadena: %s\n\n", result);
	free(result);
	return (0);
}
*/

/******************************************************************************

The ft_itoa function converts the given integer to a string.
First determine the sign of the number by checking if it is negative.
Then calculates the length of the resulting string by counting the number
of digits in the absolute value of the integer.
Memory is allocated to store the string, including space for the sign
and the null terminator.
The conversion is done by iterating the digits of the integer using
modulo and division operations.
The digits are then converted to characters by adding the ASCII value of "0".
The digits are added to the string in reverse order to ensure correct
representation of the number and if necessary the sign and null
terminator are added.

Inputs: The integer to be converted.

Output: A dynamically allocated string representing the converted integer.
NULL is returned if memory allocation fails.
******************************************************************************/