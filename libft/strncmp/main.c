#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	char *s1;
	char *s2;
	int n;
	int result;
	int handmade;

	n=3;
	s1="aaa";
	s2="acc";
	result=strncmp(s1,s2,n);
	printf("%d\n",result);
	handmade=ft_strncmp(s1,s2,n);
	printf("%d\n",handmade);
	return(0);
}
