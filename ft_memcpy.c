/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:23:38 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/06 16:49:21 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*oct1;
	unsigned char	*oct2;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	oct1 = (unsigned char*)dst;
	oct2 = (unsigned char*)src;
	while (n--)
	{
		oct1[i] = oct2[i];
		i++;
	}
	dst = oct1;
	return (dst);
}
