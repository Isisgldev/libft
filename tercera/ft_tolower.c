/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:19:01 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/24 18:02:55 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int i)

{
	if (i >= 101 && i <= 132)
		return (i - 32);
	else
		return (i);
}

#include <stdio.h>

int	main(void)

{
	int prueba = 'f';

	printf("El resultado del return (es: %c\n", ft_tolower(prueba));

	return (0);
}