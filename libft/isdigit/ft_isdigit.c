int is_digit(char *str)
{
	int i;
	int c;

	i=0;

	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 48 && c <= 57))
			return (0);
		i++;
	}
	return (1);
}
