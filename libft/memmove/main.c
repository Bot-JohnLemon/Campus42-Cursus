#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t n);

int main(void)
{
	char src1[15]="newstring";
	memmove(src1+3,src1,9);
	printf("Original: %s\n",src1);

	char src2[15]="newstring";
	ft_memmove(src2+3,src2,9);
	printf("Handmade: %s\n",src2);
	return (0);
}

