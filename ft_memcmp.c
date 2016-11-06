/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:26:27 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/06 16:50:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*chr1;
	unsigned char	*chr2;

	i = 0;
	chr1 = (unsigned char*)s1;
	chr2 = (unsigned char*)s2;
	while (n--)
	{
		if (chr1[i] != chr2[i])
			return (chr1[i] - chr2[i]);
		i++;
	}
	return (0);
}
