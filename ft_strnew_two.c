/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:36:53 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/20 14:10:19 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strnew_two(int x, int y)
{
	int		i;
	char	**tab;

	i = -1;
	if (!(tab = (char**)malloc(sizeof(*tab) * y)))
		return (NULL);
	while (++i < y)
	{
		if (!(tab[i] = (char*)malloc(sizeof(**tab) * x)))
			return (NULL);
	}
	return (tab);
}
