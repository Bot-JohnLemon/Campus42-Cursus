#include <stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	if (!big || !little)
		return NULL;
	if (!little || !little[0])
				return ((char*)big);
		i = 0;
			while (big[i] && i < len)
			{
						j = 0;
								while (big[i + j] && little[j] &&
														i + j < len && big[i + j] == little[j])
												j++;
										if (!little[j])
														return ((char*)(big + i));
												i++;
													
			}
	return (NULL);
}
