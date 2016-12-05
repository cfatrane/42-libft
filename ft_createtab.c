/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 11:44:59 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/05 11:47:41 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_createtab(int nblin, int nbcol)
{
	int i;
	int **tab;
	int *tab2;

	i = 0;
	tab = (int**)malloc(sizeof(int*) * nblin);
	tab2 = (int*)malloc(sizeof(int) * (nbcol * nblin));
	while (i < nblin)
	{
		tab[i] = &tab2[i * nbcol];
		i++;
	}
	return (tab);
}
