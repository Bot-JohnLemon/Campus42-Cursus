#include <stdio.h>

int is_ascii(int c);

int main(void)
{
	int c;
	c=-1;

	while(c != 200)
	{
		printf("%d(%d),", is_ascii(c),c);
		c++;
	}
	return (0);
}
