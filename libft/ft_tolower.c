int	ft_tolower(int c)
{
	int diff=32;

	if ((c>=65)&&(c<=90))
		return(c+diff);
	else
		return (c);
}
