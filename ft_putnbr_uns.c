/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 14:55:41 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/27 15:31:21 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_uns(unsigned long long int nb)
{
	unsigned long int nbr;

	nbr = (unsigned long int)nb;
	if (nb == 4294967295)
		ft_putstr("4294967295");
	else if (nbr >= 10)
	{
		ft_putnbr_uns(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	else
		ft_putchar((nbr % 10) + '0');
}
