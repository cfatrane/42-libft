/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 20:14:41 by dcognata          #+#    #+#             */
/*   Updated: 2016/03/20 18:52:43 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_convert(long int n, int base, char *str, int i)
{
	long int	div;
	char		temp;

	div = 1;
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	while (n / div >= base)
		div *= base;
	while (div > 0)
	{
		temp = '0' + n / div;
		if (temp > '9')
			str[i] = (temp + 39);
		else
			str[i] = temp;
		n %= div;
		div /= base;
		i++;
	}
	return (str);
}

char	*ft_itoa_base(long int n, int base)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*str) * 12);
	i = 0;
	while (i < 12)
	{
		str[i] = '\0';
		i++;
	}
	i = 0;
	if (base != 10)
		return (ft_convert((unsigned int)n, base, str, i));
	else
		return (ft_convert(n, base, str, i));
}

char	*ft_itoa(long int n)
{
	return (ft_itoa_base(n, 10));
}
