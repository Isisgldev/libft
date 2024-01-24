/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:51:14 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/17 16:57:57 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_isalpha(int i)
{
	return (( i >= 65 && i <= 90) ||  (i >= 97 && i <= 122));
}

/*
#include <stdio.h>

int main(void)
{
	int prueba = '\n';

	printf("El valor del return es: %d\n", ft_isalpha(prueba));

	return 0;
}
*/