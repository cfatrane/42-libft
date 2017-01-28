/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 14:24:48 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 11:54:20 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	***ft_tabnew_three(size_t x, size_t y, size_t z)
{
	size_t	i;
	size_t	j;
	int		***tab;

	i = -1;
	if (!(tab = (int***)malloc(sizeof(*tab) * y)))
		return (NULL);
	while (++i < y)
	{
		if (!(tab[i] = (int**)malloc(sizeof(**tab) * x)))
			return (NULL);
	}
	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if (!(tab[i][j] = (int*)malloc(sizeof(***tab) * z)))
				return (NULL);
		}
	}
	return (tab);
}
