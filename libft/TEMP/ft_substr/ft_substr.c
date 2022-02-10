#include <stddef.h>
#include <stdlib.h>

char *ft_substr(char const *s,unsigned int start,size_t len)
{
	char *str_new;
	char *str_malloc;
	size_t i;
	size_t max;

	str_new=NULL;
	i=0;
	while (s[i])
		i++;
	max=i-start;
	if(max<=len)
		str_malloc=malloc(max+1);
	else
		str_malloc=malloc(len+1);
	if (str_malloc==NULL)
		return NULL;
	str_new=str_malloc;
	i=0;
	while((len--)&&(s[start]))
	{
		*(str_new+i)=*(s+start);
		i++;
		start++;
	}
	str_new[i]='\0';
	return (str_new);
}
