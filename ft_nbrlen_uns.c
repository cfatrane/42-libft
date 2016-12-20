/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 17:28:12 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/20 17:29:22 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen_uns(long int nb)
{
	int				len;
	unsigned int	nbr;

	len = 0;
	nbr = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (10);
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
