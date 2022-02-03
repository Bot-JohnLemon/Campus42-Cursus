#include <stdlib.h>

void *ft_memset(void *str, int c, size_t len)
{
	int i;
	unsigned char *p;

	p=str;
	i=0;
	while(len!=0)
	{
		*p=c;
		p++;
		len--;
	}
	return (str);
}
