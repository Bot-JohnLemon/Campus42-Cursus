int	ft_strlen(const char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}
