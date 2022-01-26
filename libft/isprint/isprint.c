int is_print(char c)
{
	int a;

	a = c;
	if ((a>=32)&&(a<=127))
		return (1);
	return (0);
}
