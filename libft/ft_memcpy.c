/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:34:19 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/04/28 16:40:35 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_aux;
	const char	*src_aux;

	src_aux = src;
	dst_aux = dst;
	if ((dst_aux == NULL) && (src_aux == NULL))
		return (dst);
	while (n)
	{
		*(dst_aux++) = *(src_aux++);
		n--;
	}
	return (dst);
}
