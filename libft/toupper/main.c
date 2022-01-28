#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);

int main(void)
{
	int result;
	int handmade;
	char x='x';

	result=toupper(x);
	printf("%c\n",result);
	handmade=ft_toupper(x);
	printf("%c\n",handmade);
	return (0);
}
