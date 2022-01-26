#include <stdio.h>

int is_digit(char *str);

int main(void)
{
	int result;

	result=is_digit("12345");
	printf("%d\n", result);
}
