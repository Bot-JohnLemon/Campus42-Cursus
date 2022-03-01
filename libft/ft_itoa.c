#include <stdio.h>
#include <stdlib.h>

char	*my_malloc(int len)
{
	char	*string;

	string = malloc(len + 2);
	if (string == NULL)
		return (NULL);
	return (string);
}

char	*convert(char *string, int i, int power)
{
	while (power > 0)
	{
	*string++ = '0' + i / power;
	i %= power;
	power /= 10;
	}
	*string = '\0';
	return (string);
}

char	*ft_itoa(int i)
{
	int		power;
	int		j;
	int		len;
	char	*string;
	char	*str;

	power = 1;
	j = i;
	len = 0;
	while (j > 10)
	{
	power *= 10;
	j /= 10;
	len++;
	}
	string = my_malloc(len);
	str = string;
	string = convert(string, i, power);
	return (str);
}
