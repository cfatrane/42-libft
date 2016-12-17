/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 11:24:12 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/17 20:19:23 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_tab(int num, int base)
{
	size_t	len;

	while (num != 0)
	{
		num /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int num, int base)
{
	char	*str;
	char	*tmp;
	size_t	i;
	size_t	len;

	if (num == 0)
		return (ft_strdup("0"));
	tmp = ft_strnew(16);
	strcpy(tmp, "0123456789ABCDEF");
	len = size_tab(num, base);
	str = ft_strnew(len);
	i = 1;
	while (num != 0)
	{
		str[len - i] = tmp[num % base];
		num /= base;
		i++;
	}
	return (str);
}
