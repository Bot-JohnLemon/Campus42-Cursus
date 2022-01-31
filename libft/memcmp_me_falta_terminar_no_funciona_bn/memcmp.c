#include <stdlib.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *str1_aux;
	unsigned char *str2_aux;
	size_t i;

	i=0;
	str1_aux=(unsigned char *)str1;
	str2_aux=(unsigned char *)str2;
	while (i < n)
	{
			if (str1_aux[i] != str2_aux[i])
				return ((unsigned char)str1_aux[i] - (unsigned char)str2_aux[i]);
			i++;
	}
	return (0);
}
