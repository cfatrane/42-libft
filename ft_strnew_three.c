/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:50:06 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 14:08:43 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	***ft_strnew_three(int x, int y, int z)
{
	int		i;
	int		j;
	char	***tab;

	i = -1;
	j = 0;
	if (!(tab = (char***)malloc(sizeof(*tab) * y)))
		return (NULL);
	while (++i < y)
	{
		if (!(tab[i] = (char**)malloc(sizeof(**tab) * x)))
			return (NULL);
	}
	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if (!(tab[i][j] = (char*)malloc(sizeof(***tab) * z)))
				return (NULL);
		}
	}
	return (tab);
}
