#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void ft_bzero(void *str, size_t n);

int main(void)
{
	char *str;
	int n;

	n=5;
	str= "hola";
	ft_bzero(str,n);
	return (0);
}
