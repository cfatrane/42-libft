/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:39:45 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/22 10:39:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int root;

	root = 1;
	while (root * root != nb)
	{
		if (root / 2 > nb)
		{
			break ;
		}
		root++;
	}
	if (root * root == nb)
		return (root);
	return (0);
}
