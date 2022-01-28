#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int c);

int main(void)
{
	char *str;
	char *result;
	char *handmade;
	char ch='\0';
	str="zabcdefghijklmnopqrstuvwxyz";
	result=strrchr(str,ch);
	printf("%s\n",result);
	handmade=ft_strrchr(str,ch);
	printf("%s\n",handmade);
	return(0);
}
