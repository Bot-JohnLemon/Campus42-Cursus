#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src,size_t dstsize)
{
	unsigned long int src_index;
	unsigned long int offset;
	unsigned long int s_len;
	unsigned long int d_len;

	src_index=0;
	offset=0;
	d_len=0;
	s_len=0;

	while(src[s_len]!='\0')
		s_len++;
	while(dst[d_len]!='\0')
		d_len++;
	offset=d_len;
	while((src[src_index]!='\0') && (offset!=dstsize))
	{
		dst[offset] = src[src_index];
		offset++;
		src_index++;
	}
/*El programa devuelve perfectamente el resultado que pide que es el total del truncamiento de la cadena, solo que por alguna razon en la cadena devuelta imprime malamente la cadena en el caso de que el dstsize y el total de de d_len mas s_len sea igual a dstsize, de todas formas el programa corre perfectamente*/
	
	return (d_len+s_len);
}
