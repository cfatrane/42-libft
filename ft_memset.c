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
	unsigned char	chr1;
	unsigned char	chr2;

	chr1 = (unsigned char*)b;
	chr2 = (unsigned char)c;
	while (len--)
	{
		chr1[i] = chr2[i];
		i++;
	}
	return (b)
}
/*
{
	size_t	i;
	char	*s_copy;
	char	c_copy;

	s_copy = (char*)s;
	c_copy = (char)c;
	i = 0;
	while (i < n)
	{
		s_copy[i] = c_copy;
		i++;
	}
	return (s);
}
*/