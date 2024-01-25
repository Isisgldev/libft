/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:23:12 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/17 17:37:12 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int i)

{
    if ( i >= 97  && i <= 122 )
        return (i - 32);
    else
        return (i);
}

# include <stdio.h>

int main (void)

{
    int prueba = 'j';

	printf("El valor del return es: %c\n", ft_toupper(prueba));

	return 0;
}
