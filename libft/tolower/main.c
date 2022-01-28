#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c);

int main(void)
{
	int result;
	int handmade;
	char x='X';
	result=tolower(x);
	printf("%c\n",result);
	handmade=ft_tolower(x);
	printf("%c\n",handmade);
	return(0);
}
