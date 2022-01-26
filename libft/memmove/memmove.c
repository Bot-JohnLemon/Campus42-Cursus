#include <stdlib.h>

void *ft_memmove(void *dst,const void *src, size_t n)
{
	unsigned long int i;
	char *dst_aux;
	const char *src_aux;
	char temp[n];

	src_aux=src;
	dst_aux=dst;
	i=0;
	if ((dst_aux!=NULL) && (src_aux!=NULL))
	{
		while(i<n)
		{
			temp[i]=src_aux[i];
			i++;
		}
		i=0;
		while(i<n)
		{
			dst_aux[i]=temp[i];
			i++;
		}
	}
	return (dst_aux);
}
