/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:49:55 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/24 17:05:48 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int i)
{
    return (i >= 0 && i <= 127);
}


#include <stdio.h>

int main (void)

{
	int prueba = '6';

	printf("El valor del return es: %d\n", ft_isascii(prueba));

	return 0;
}
