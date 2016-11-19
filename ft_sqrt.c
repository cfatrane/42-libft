/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:27:07 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/19 15:03:29 by cfatrane         ###   ########.fr       */
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
