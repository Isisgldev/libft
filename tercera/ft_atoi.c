/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:29:32 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/24 18:07:18 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	sig;
	int	i;

	n = 0;
	sig = 1;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		sig = sig * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * sig);
}


int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		printf("Con atoi. Cadena: %s, numero: %i\n", str, atoi(str));
		printf("Con ft_atoi. Cadena: %s, numero: %i\n", str, ft_atoi(str));
	}
	else
		write(1, "\n", 1);
	return (0);
}
