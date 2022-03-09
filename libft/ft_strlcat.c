/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:33:42 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/03/09 15:33:43 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_index;
	size_t	offset;
	size_t	s_len;
	size_t	d_len;

	src_index = 0;
	offset = 0;
	d_len = 0;
	s_len = 0;
	while (src[s_len] != '\0')
		s_len++;
	while (dst[d_len] != '\0')
		d_len++;
	offset = d_len;
	while ((src[src_index] != '\0') && (offset != dstsize))
	{
		dst[offset] = src[src_index];
		offset++;
		src_index++;
	}
	return (d_len + s_len);
}
