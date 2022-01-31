#include <stdlib.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int diff;

	diff=0;
	while((*s2!='\0')&&(n>0))
	{
		if (*s1!=*s2)
		{
			diff=*s1-*s2;
			return diff;
		}
		s1++;
		s2++;
		n--;
	}
	diff=*s1-*s2;
	return (diff);
}
