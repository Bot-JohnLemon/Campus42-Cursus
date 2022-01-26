#include <stdio.h>

int is_print(char c);

int main(void)
{
	char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, is_print(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, is_print(c));
	return (0);
}
