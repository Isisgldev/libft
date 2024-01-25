/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:43:12 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/23 22:50:11 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strncmp (const char *s1, const char *s2, size_t n)

{
	size_t  i;

    i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		else if (s1[i] == '\0')
			return (0);
        i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main (void)
{
const char *s1  = "hello";
const char *s2 = "hello world";

    int resultado = ft_strncmp(s1, s2, 2);
    
    if (resultado == 0) 
    {
        printf("Las n primeras letras son iguales. %d\n", resultado);
    } 
    else if (resultado < 0) 
    {
        printf("La cadena1 es menor que la cadena2. %d\n", resultado);
    } 
    else 
    {
        printf("La cadena1 es mayor que la cadena2. %d\n", resultado);
    }
    
    return 0;
}
*/