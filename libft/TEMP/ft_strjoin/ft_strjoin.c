#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str_aux;
	size_t	i;
	char *s1_aux;
	char *s2_aux;
	size_t	s1_aux_len;
	size_t	s2_aux_len;

	s1_aux=(char *)s1;
	s2_aux=(char *)s2;
	i = 0;
	s1_aux_len=0;
	s2_aux_len=0;
	while (s1_aux[s1_aux_len])
		s1_aux_len++;
	while (s2_aux[s2_aux_len])
		s2_aux_len++;
	str_aux= malloc(s1_aux_len+s2_aux_len);
	if (str_aux==NULL)
		return (NULL);
	s1_aux_len=0;
	s2_aux_len=0;
	while (s1_aux[s1_aux_len])
	{
		str_aux[i]=s1_aux[s1_aux_len];
		s1_aux_len++;
		i++;
	}
	while (s2_aux[s2_aux_len])
	{
		str_aux[i]=s2_aux[s2_aux_len];
		s2_aux_len++;
		i++;
	}
	return (str_aux);
}
