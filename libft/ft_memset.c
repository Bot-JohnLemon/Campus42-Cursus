/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:34:14 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/03/09 15:34:15 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t len)
{
	int				i;
	unsigned char	*p;

	p = str;
	i = 0;
	while (len != 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (str);
}
