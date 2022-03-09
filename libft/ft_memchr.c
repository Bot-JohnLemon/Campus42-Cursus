/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:34:30 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/03/09 15:34:31 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned long int	i;
	char				*str_aux;

	str_aux = (char *)str;
	i = 0;
	while ((str_aux[i] != '\0') && (n--))
	{
		if (str_aux[i] == c)
			return (str_aux + i);
		i++;
	}
	return (0);
}
