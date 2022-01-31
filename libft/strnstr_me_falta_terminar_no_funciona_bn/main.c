#include <string.h>
#include <stdio.h>

/*char *ft_strnstr(const char	*big, const char *little, size_t len);*/

int main(void)
{
	char *big;
	char *little;
	size_t len;
	char *res1;
	/*char *res2;*/

	big="hola david";
	little="david";
	len=10;
	res1=strnstr(big,little,len);
	printf("%s\n",res1);
	/*res2=ft_strnstr(big,little,len);*/
	/*printf("%s\n",res2);*/
	return (0);
}
