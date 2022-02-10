#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s,unsigned int start,size_t len);

int main(void)
{
	char *str;
	char *str_new;

	str="1234567890";
	str_new=ft_substr(str,7,5);
	printf("The new string is: %s\n",str_new);
	return (0);
}
