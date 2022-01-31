int is_alpha(char *str)
{
	int i;
	int c;

	i=0;

	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
			return (0);
		i++;
	}
	return (1);
}
