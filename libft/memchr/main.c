#include <string.h>
#include <stdio.h>
#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n);

int main(void)
{
	char *str;
	char ch;
	unsigned long int len;
	char *res1;
	char *res2;

	ch='b';
	len=4;
	str="abcdefghijklmnopqrstuvwxyz";
	res1=memchr(str,ch,len);
	printf("%s\n",res1);
	res2=ft_memchr(str,ch,len);
	printf("%s\n",res2);
	return (0);
}
