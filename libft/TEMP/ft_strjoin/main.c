#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2);

int main(void)
{
	char *s1;
	char *s2;
	char *res;

	s1 = "12345 ";
	s2 = "67890";
	res = ft_strjoin(s1, s2);
	printf("The resulting string is: %s\n", res);
	return (0);
}
