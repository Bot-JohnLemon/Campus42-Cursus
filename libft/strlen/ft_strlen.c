int str_len(char *str)
{
	unsigned int c;

	c=0;
	while(str[c]!='\0')
		c++;
	return (c);
}
