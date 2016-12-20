/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 13:10:19 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/20 15:06:33 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int nb)
{
	int				len;
	unsigned int	nbr;

	len = 0;
	nbr = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nbr = -nb;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
