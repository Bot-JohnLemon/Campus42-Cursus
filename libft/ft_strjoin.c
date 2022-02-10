#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str_aux;
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;
	size_t  x;

	s1_len = 0;
    s2_len = 0;
    while (s1[s1_len])
        s1_len++;
    while (s2[s2_len])
        s2_len++;
	str_aux = malloc(s1_len + s2_len);
    if (str_aux == NULL)
        return (NULL);
    i = -1;
	x = -1;
	while (++i < s1_len)
		*(str_aux + i) = *(s1 + i);
	while (++x < s2_len)
		*(str_aux + i++) = *(s2 + x);
	return (str_aux);
}
