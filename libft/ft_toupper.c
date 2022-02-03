int ft_toupper(int c)
{
	int diff;

	diff=32;
	if ((c>=97)&&(c<=122))
		return(c-diff);
	else
		return (c);
}
