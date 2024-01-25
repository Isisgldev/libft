/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:09:44 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/17 17:02:52 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isprint(int i)
{
    return ( i >= 32 && i <= 126);
}
/*

#include <stdio.h>

int main(void)
{
	int prueba = '6';

	printf("El valor del return es: %d\n", ft_isprint(prueba));

	return 0;
}
*/