/*En la bla ascii las mayusculas van desde el 65=A hasta el 90=Z*/
/*En la tabla ascii las minusculas van desde el 97=a hasta el 122=z*/
/*La diferecnia entre matusculas y minusculas es de 32*/

int	ft_tolower(int c)
{
	int diff=32;

	if ((c>=65)&&(c<=90))
		return(c+diff);
	else
		return (c);
}
