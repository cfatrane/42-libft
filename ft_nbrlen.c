/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 13:10:19 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/19 13:12:58 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int nbr)
{
	int		len;
	size_t	nb;

	len = 0;
	nb = nbr;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nb = -nbr;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
