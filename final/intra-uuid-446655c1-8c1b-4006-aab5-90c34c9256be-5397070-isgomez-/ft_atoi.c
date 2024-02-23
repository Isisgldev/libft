/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:29:32 by isgomez-          #+#    #+#             */
/*   Updated: 2024/02/05 23:22:32 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
int	main(void)
{
	printf("Resultado con ft_atoi %d\n", ft_atoi("hello 42"));
	printf("Resultado con atoi %d\n", atoi("hello 42"));
	printf("Resultado con ft_atoi %d\n ", ft_atoi("-42"));
	printf("Resultado con atoi %d\n", atoi("-42"));
	printf("Resultado con ft_atoi %d\n", ft_atoi("  -42"));
	printf("Resultado con atoi %d\n", atoi("  -42"));
	printf("Resultado con ft_atoi %d\n", ft_atoi("  hallo42,3434"));
	printf("Resultado con atoi %d\n", atoi("  hallo42,3434"));
	printf("Resultado con ft_atoi %d\n", ft_atoi("  42,4343hola"));
	printf("Resultado con atoi %d\n", atoi("  42,4343hola"));
	printf("Resultado con ft_atoi %d\n", ft_atoi("92233720368547758089"));
	printf("Resultado con atoi %d\n", atoi("92233720368547758098"));
	return (0);
}
*/

/******************************************************************************
The ft_atoi function scans the input string and converts it to an integer.
Ignores leading whitespace when advancing the pointer. If a plus (+) or
minus (-) sign is found, it determines the sign of the number
and advances the pointer.
It then processes each digit character and calculates the corresponding
integer value.
Performs checks to prevent overflow by comparing the current value with
the previous value multiplied by the sign. If an overflow occurs,
it returns 0 if the sign is positive or -1 if the sign is negative.
Finally, it returns the resulting integer value.

Input
A pointer to the string to be converted.

Return
The integer value obtained from the input string.

******************************************************************************/