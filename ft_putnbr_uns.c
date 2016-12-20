/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 14:55:41 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/20 17:21:38 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_uns(long int nb)
{
	unsigned long int nbr;

	nbr = (unsigned long int)nb;
	if (nb == 4294967295 || nb < 0)
		ft_putstr("4294967295");
	else if (nbr >= 10)
	{
		ft_putnbr_uns(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	else
		ft_putchar((nbr % 10) + '0');
}
