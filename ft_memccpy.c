/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:24:04 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/05 10:57:05 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*oct1;
	unsigned char	*oct2;
	size_t			i;
	unsigned char	chr;

	if (dst == src || n == 0)
		return (dst);
	oct1 = (unsigned char *)dst;
	oct2 = (unsigned char *)src;
	chr = (unsigned char)c;
	i = 0;
	while (n--)
	{
		oct1[i] = oct2[i];
		if (oct1[i] == chr)
			return (oct1 + i + 1);
		i++;
	}
	return (NULL);
}
