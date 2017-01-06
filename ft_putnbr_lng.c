/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lng.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 12:53:51 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/05 13:15:09 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_lng(long long int n)
/*{
	unsigned long long int max;

	max = ULONG_MAX;
	if (n == max)
		ft_putstr("18446744073709551615");
	else if (n < max && n > 9)
	{
		ft_putnbr_lng(n / 10);
		ft_putnbr_lng(n % 10);
	}
	else
		ft_putchar(n + '0');
}*/
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr_lng(n / 10);
	ft_putchar(n % 10 + '0');
}
