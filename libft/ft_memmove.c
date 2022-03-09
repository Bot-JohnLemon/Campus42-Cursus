/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:34:17 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/03/09 15:34:18 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_aux;
	const char	*src_aux;
	char		*temp;	

	src_aux = src;
	dst_aux = dst;
	i = 0;
	if ((dst_aux != NULL) && (src_aux != NULL))
	{
		while (i < n)
		{
			temp[i] = src_aux[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			dst_aux[i] = temp[i];
			i++;
		}
	}
	return (dst_aux);
}
