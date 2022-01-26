#include <stdio.h>
#include <string.h>

int str_len(char *str);

int main(void)
{
	char *str;

	str="hola";
	printf("strlen=%lu",strlen(str));
	printf("\nstr_len=%d",str_len(str));
	return (0);
}
