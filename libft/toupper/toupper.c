/*En la bla ascii las mayusculas van desde el 65=A hasta el 90=Z*/
/*En la tabla ascii las minusculas van desde el 97=a hasta el 122=z*/
/*La diferecnia entre matusculas y minusculas es de 32*/

int ft_toupper(int c)
{
	int diff;

	diff=32;
	if ((c>=97)&&(c<=122))
		return(c-diff);
	else
		return (c);
}
