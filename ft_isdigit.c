/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:00:19 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/17 14:56:48 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_isdigit(int i)
{
	return (i >= 48 && i <= 57);
}
/*
#include <stdio.h>

int main (void)
{
	int prueba = '0';
	printf("el valor de return es: %d\n", ft_isdigit(prueba));
	return 0;
}
*/
