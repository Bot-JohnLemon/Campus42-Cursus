#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned long int i;
	char *str_aux;

	str_aux=(char *)str;
	i=0;
	while((str_aux[i]!='\0')&&(n--))
	{
		if(str_aux[i]==c)
			return (str_aux+i);
		i++;
	}
	return (0);
}
