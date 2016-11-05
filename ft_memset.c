/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:21:36 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:21:39 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr2;

	i = 0;
	str = (unsigned char*)b;
	chr2 = (unsigned char)c;
	while (len--)
	{
		str[i] = chr2;
		i++;
	}
	b = str;
	return (b);
}