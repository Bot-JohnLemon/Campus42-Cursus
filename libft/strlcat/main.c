#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst,const char *src,size_t dstsize);

int main(void)
{
	char src[]="DeezNutzzz";
	/*char dst1[30]="1234567890";*/
	char dst2[30]="1234567890";
	int x;
	int size;

	size=20;

	/*x=strlcat(dst1,src,size);*/
	/*printf("The result of the original is: %d\n", x);*/
	/*printf("%s\n",dst1);*/
	x=ft_strlcat(dst2,src,size);
	printf("The result of the handmade is: %d\n", x);
	printf("%s\n", dst2);
	return (0);
}
