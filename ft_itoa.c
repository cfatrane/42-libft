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

static char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	temp;

	length = 0;
	i = 0;
	while (str[length])
	{
		++length;
	}
	while (i < (length / 2))
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
		i++;
	}
	str[length] = '\0';
	return (str);
}

static int	count(int num)
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

char		*ft_itoa(int num)
{
	char		*str;
	int			i;
	int			length;
	int			sign;
	long int	n;

	n = num;
	if ((sign = n) < 0)
		n = -n;
	length = count(num);
	if (!(str = (char*)malloc(sizeof(*str) * (length + 1))))
		return (NULL);
	str[0] = (n % 10) + 48;
	i = 1;
	while ((n /= 10) > 0)
	{
		str[i] = (n % 10) + 48;
		i++;
	}
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}
