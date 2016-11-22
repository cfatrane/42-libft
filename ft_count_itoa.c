/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:32:27 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/22 10:32:32 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_itoa(int num)
{
	int			count;
	long int	nb;

	count = 0;
	nb = num;
	if (num < 0)
	{
		nb = -nb;
		count++;
	}
	if (num == 0)
		count = 1;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
