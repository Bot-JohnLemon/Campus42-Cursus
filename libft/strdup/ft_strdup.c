#include <stdlib.h>

char *ft_strdup(const char *src)
{
	char *str_malloc;
	char *str_aux;
	int i;

	i=0;
	if (!src)
				return (NULL);
	while (src[i])
		i++;
	str_malloc=malloc(i+1);
	if(str_malloc==NULL)
		return NULL;
	str_aux=str_malloc;
	i=0;
	while(src[i])
	{
		*(str_aux+i)=*(src+i);
		i++;
	}
	return str_aux;
}
