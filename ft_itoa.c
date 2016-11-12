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
	int		len;
	int		i;
	char	tmp;

	len = 0;
	i = 0;
	while (str[len])
		++len;
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	str[len] = '\0';
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
	int			len;
	int			sign;
	long int	n;

	n = num;
	if ((sign = n) < 0)
		n = -n;
	len = count(num);
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
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
