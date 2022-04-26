/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:35:05 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/04/26 20:18:50 by johnlemon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count == 0 || size == 0)
		return (NULL);
	else
	{
		p = malloc(count * size);
		ft_bzero(p, count * size);
		return (p);
	}
}
