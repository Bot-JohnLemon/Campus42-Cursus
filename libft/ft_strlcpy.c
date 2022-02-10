#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!(dstsize == 0))
	{
		while (i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
