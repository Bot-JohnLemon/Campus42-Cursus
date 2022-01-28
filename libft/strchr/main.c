#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c);

int main(void)
{
	char *str;
	char *result;
	char *handmade;
	char ch='\0';
	str="abcdefghijklmnopqrstuvwxyz";
	result=strchr(str,ch);
	printf("%s\n",result);
	handmade=ft_strchr(str,ch);
	printf("%s\n",handmade);
	return(0);
}
