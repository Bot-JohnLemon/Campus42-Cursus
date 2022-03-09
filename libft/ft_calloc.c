/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:35:05 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/03/09 15:35:06 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t number, size_t size)
{
	int		*array_aux;
	void	*array_malloc;
	size_t	i;

	i = 0;
	array_malloc = malloc(number * size);
	if (array_malloc == NULL)
		return (NULL);
	array_aux = (int *)array_malloc;
	while (i < number)
	{	
		*(array_aux + i) = 0;
		i++;
	}
	return (array_aux);
}
