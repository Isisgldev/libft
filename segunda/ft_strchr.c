/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:20:16 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/23 22:52:14 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
    while (*s != '\0' && *s != c)
        s++;

    if (*s == c)
    {
        return ((char *)s);
    }
    else 
    {
        return (NULL);
    }
}
/*
#include <stdio.h>

int main (void)
{
const char *s = "Yo preferiría, con mucho, ser feliz a tener razón.";
char buscar = '\0';

 char *resultado = ft_strchr(s, buscar);

    if (resultado != NULL) 
    {
        printf("Se encontró '%c' en la posición de la cadena %ld.\n", buscar, resultado - s);
    } else {
        printf("'%c' no se encontró en la cadena.\n", buscar);
    }

    return 0;
}
*/