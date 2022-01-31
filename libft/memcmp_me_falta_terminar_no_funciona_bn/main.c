#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_memcmp(const void *str1, const void *str2, size_t n);

int main(void)
{
	char *str1;
	char *str2;
	unsigned long int n;
	int res1;
	int res2;

	str1="baa";
	str2="aba";
	n=2;
	res1=memcmp(str1,str2,n);
	printf("%d\n",res1);
	res2=ft_memcmp(str1,str2,n);
	printf("%d\n",res2);
	return (0);
}
