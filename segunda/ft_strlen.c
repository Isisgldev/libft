/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:44:03 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/23 22:20:42 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    
    while (str[i] != '\0')
        i++;
	return (i);  
}

/* 
#include <stdio.h> 

int main(void)
{
    char s[] = "El sentido de la vida, el universo y todo lo demás";
    printf("%zu\n", ft_strlen(s));
}
*/