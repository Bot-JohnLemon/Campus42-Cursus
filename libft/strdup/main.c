#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(const char *src);

int main(void)
{
	char *str_new1;
	char *str_new2;

	str_new1=strdup("deezNutz");
	printf("The real strdup is: %s\n",str_new1);
	str_new2=ft_strdup("deezNutz");
	printf("The implemented strdup is: %s\n",str_new2);
	return (0);
}
