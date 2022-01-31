#include <stdlib.h>

void ft_bzero(void *str, size_t n)
{
	unsigned int i;
	char *str_aux;
	
	i=0;
	str_aux=str;

	while(i<n)
	{
		str_aux[i]='\0';
		i++;
	}
}
