/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 11:24:12 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/16 15:37:56 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countmalloc_base(unsigned int c, size_t base)
{
	size_t i;

	i = 0;
	while (c > 1)
	{
		c = c / base;
		i++;
	}
	return (i);
}

char	ft_convert_to_char(int c)
{
	if (c > 9)
		return ('a' + (c - 10));
	else
		return ('0' + c);
}

char	*ft_itoa_base(int num, size_t base)
{		
	int		i;
	char	*ret;

	if (base > 36)
		return (NULL);
	i = 0;
	ret = (char*)malloc(sizeof(char) * (ft_countmalloc_base(num, base) + 1));
	while (num != 0)
	{
		ret[i++] = ft_convert_to_char(num % base);
		num = num / base;
	}
	ret[i] = '\0';
	return (ft_strrev(ret));
}
