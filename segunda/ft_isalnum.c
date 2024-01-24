/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:52:27 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/17 16:57:55 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int i)
{
    if (ft_isalpha(i) || ft_isdigit(i))
		return (1);
	return (0);
}
/*
int main (void)
{
	int prueba = '\n';
	printf("el valor de return es: %d\n", ft_isalnum(prueba));
	return 0;
}
*/