/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 11:24:12 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/19 14:58:47 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	size_tab_base(int num, int base)
{
	size_t	len;

	len = 0;
	while (num != 0)
	{
		num /= base;
		len++;
	}
	return (len);
}

char			*ft_itoa_base(int num, int base)
{
	char	*str;
	char	*tmp;
	size_t	i;
	size_t	len;

	if (num == 0)
		return (ft_strdup("0"));
	if (!(tmp = ft_strnew(16)))
		return (NULL);
	ft_strcpy(tmp, "0123456789ABCDEF");
	len = size_tab_base(num, base);
	if (!(str = ft_strnew(len)))
		return (NULL);
	i = 1;
	while (num != 0)
	{
		str[len - i] = tmp[num % base];
		num /= base;
		i++;
	}
	return (str);
}
