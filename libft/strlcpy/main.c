#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main(void)
{
	char *src;
	char dst1[11];
	char dst2[11];
	int x;
	int size;

	size=11;
	src="DeezNutss";

	x=strlcpy(dst1,src,size);
	printf("The result of the original is: %d\n",x);
	printf("%s\n",dst1);
	x=ft_strlcpy(dst2,src,size);
	printf("The result of the recreation is: %d\n",x);
	printf("%s\n",dst2);
	return (0);
}
