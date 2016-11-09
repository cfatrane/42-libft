/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:59:11 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/10 17:42:07 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	if (dst == src || n == 0)
		return (dst);
	c2 = (unsigned char *)src;
	c1 = (unsigned char *)dst;
	while (n--)
		*c1++ = *c2++;
	return (dst);
}
