/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:26:03 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:26:06 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*oct1;
	unsigned char	*oct2;
	size_t			i;

	if (!(tmp = (unsigned char*)malloc(sizeof(tmp) * n)))
		return (NULL);
	oct1 = (unsigned char*)dst;
	oct2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		tmp[i] = oct2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		oct1[i] = tmp[i];
		i++;
	}
	free (tmp);
	return (dst);
}
