#include <stdio.h>

int ft_atoi(const char *str)
{
	int val;
	char *str_aux;
	int i;

	str_aux=(char *)str;
	val=0;
	i=0;
	while((str_aux[i]!='\0')&&(str_aux[i]>=48)&&(str_aux[i]<=57))
	{
		val=(val+(str_aux[i]%48))*10;
		i++;
	}
	val=val/10;
	return (val);
}
