#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_aux;
	const char	*src_aux;

	src_aux = src;
	dst_aux = dst;
	if ((dst_aux != NULL) && (src_aux != NULL))
	{
		while (n)
		{
			*(dst_aux++) = *(src_aux++);
			n--;
		}
	}
	return (dst);
}
