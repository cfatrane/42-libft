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
	int nb;
	int sign;

	nb = 0;
	sign = 1;
	if (!nptr)
		return (0);
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\r'
			|| *nptr == '\v' || *nptr == '\f')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = (-1);
		nptr++;
	}
	while (ft_isdigit(int)*str)
	{
		nb = nb * 10 + *nptr - '0';
		nptr+;
	}
	return (sign * nb);
}