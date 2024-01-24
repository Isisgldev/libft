
#include "libft.h"
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*alts;

	alts = (char*)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (alts + i);
	while (i != 0)
	{
		if (alts[i] == (char)c)
			return (alts + i);
		i--;
	}
	if (s[0] == (char)c)
		return (alts);
	return (0);
}
/*
#include <stdio.h>

int main(void) {
    const char *cadena = "Hello, World!";
    int buscar = 'l';

    char *resultado = ft_strrchr(cadena, buscar);

    if (resultado != NULL) {
        printf("Se encontró '%c' en la posición %ld.\n", (char)buscar, resultado - cadena);
    } else {
        printf("'%c' no se encontró en la cadena.\n", (char)buscar);
    }

    return 0;
}
*/