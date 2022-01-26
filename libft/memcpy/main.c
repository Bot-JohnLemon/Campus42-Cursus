#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main(void)
{
	char str_src1[]="saludos";
	char str_src2[]="saludos";

	memcpy(str_src1,str_src1+4,3);
	printf("Real: %s\n",str_src1);
//
	ft_memcpy(str_src2,str_src2+4,3);
	printf("Handmade: %s\n",str_src2);

	return (0);
}
