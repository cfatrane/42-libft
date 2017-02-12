/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 10:38:34 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/04 18:52:18 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int *tab, unsigned int len)
{
	unsigned int	i;
	int				min;

	if (len == 0)
		return (0);
	i = 1;
	min = *tab;
	while (i != len)
	{
		if (min > *(tab + i))
			min = *(tab + i);
		i++;
	}
	return (min);
}
