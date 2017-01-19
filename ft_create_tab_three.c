/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab_three.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:34:16 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/18 15:58:17 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	***ft_create_tab_three(int x, int y, int z)
{
	int	i;
	int j;
	int	***tab;

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
