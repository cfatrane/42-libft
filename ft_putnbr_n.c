/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 20:04:19 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/29 20:19:19 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_n(long long int nb, int n)
{
	static int i = 0;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		i++;
	}
	if (nb > 9 && i < n)
	{
		ft_putnbr(i);
		i++;
		ft_putnbr_n(nb / 10, n);
	}
	ft_putchar(nb % 10);
}
