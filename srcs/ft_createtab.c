/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 11:44:59 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/05 16:21:04 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_createtab(int nblin, int nbcol)
{
	int i;
	int **tab;
	int *tab2;

	i = 0;
	if (!(tab = (int**)malloc(sizeof(tab) * nblin)))
		return (NULL);
	if (!(tab2 = (int*)malloc(sizeof(tab2) * (nbcol * nblin))))
		return (NULL);
	while (i < nblin)
	{
		tab[i] = &tab2[i * nbcol];
		i++;
	}
	return (tab);
}
