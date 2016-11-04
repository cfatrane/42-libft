/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:33:14 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 13:33:25 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int nb;
	long int sign;

	nb = 0;
	sign = 1;
	while (*nptr >= 127 || *nptr <= 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = (-1);
		nptr++;
	}
	while (ft_isdigit((int)*nptr))
	{
		nb = nb * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * nb);
}