/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:32:46 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/03/09 16:33:24 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_malloc(char *str_malloc, int len, int max)
{
	if (max <= len)
		str_malloc = malloc(max + 1);
	else
		str_malloc = malloc(len + 1);
	return (str_malloc);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_new;
	char	*str_malloc;
	size_t	i;
	size_t	max;

	str_new = NULL;
	str_malloc = NULL;
	i = 0;
	while (s[i])
		i++;
	max = i - start;
	str_malloc = ft_malloc(str_malloc, len, max);
	str_new = str_malloc;
	if (str_malloc == NULL)
		return (NULL);
	i = 0;
	while ((len--) && (s[start]))
	{
		*(str_new + i) = *(s + start);
		i++;
		start++;
	}
	str_new[i] = '\0';
	return (str_new);
}
