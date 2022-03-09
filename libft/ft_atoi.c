/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:35:09 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/03/09 15:35:10 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		val;
	char	*str_aux;
	int		i;

	str_aux = (char *) str;
	val = 0;
	i = 0;
	while ((str_aux[i] != '\0') && (str_aux[i] >= 48) && (str_aux[i] <= 57))
	{
		val = (val + (str_aux[i] % 48)) * 10;
		i++;
	}
	val = val / 10;
	return (val);
}
