/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:54:00 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 13:54:03 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int num)
{
	char		*str;
	int			i;
	int			len;
	int			sign;
	long int	n;

	n = num;
	if ((sign = n) < 0)
		n = -n;
	len = ft_count_itoa(num);
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[0] = (n % 10) + '0';
	i = 1;
	while ((n /= 10) > 0)
	{
		str[i] = (n % 10) + '0';
		i++;
	}
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev_itoa(str));
}
