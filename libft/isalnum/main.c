#include <stdio.h>

int is_alnum(char *str);

int main(void)
{
	int result;
	
	result=is_alnum("hola,123");
	printf("%d\n", result);
	return (0);
}
