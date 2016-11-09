/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:04:17 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/01 20:29:23 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*c1;
	char	*c2;
	size_t	cur;

	if (dst == src || n == 0)
		return (0);
	cur = 0;
	c1 = (char *)dst;
	c2 = (char *)src;
	while (cur < n)
	{
		c1[cur] = c2[cur];
		if (c1[cur] == c)
		{
			return (c1 + cur + 1);
		}
		cur++;
	}
	return (NULL);
}
