/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew_two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 14:22:42 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 11:53:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_tabnew_two(size_t x, size_t y)
{
	size_t	i;
	int		**tab;
	int		*tab2;

	i = 0;
	if (!(tab = (int**)malloc(sizeof(tab) * y)))
		return (NULL);
	if (!(tab2 = (int*)malloc(sizeof(tab2) * (x * y))))
		return (NULL);
	while (i < y)
	{
		tab[i] = &tab2[i * x];
		i++;
	}
	return (tab);
}
