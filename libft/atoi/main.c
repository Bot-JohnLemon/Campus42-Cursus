#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(const char *str);

int main(void)
{
	int val1;
	int val2;
	char *str;

	str="a123a100";
	val1=atoi(str);
	printf("The original is: %d\n",val1);
	val2=ft_atoi(str);
	printf("The handmade is: %d\n",val2);
	return (0);
}
