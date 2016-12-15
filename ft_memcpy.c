/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:37:44 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/27 13:17:52 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*oct1;
	unsigned char	*oct2;

	if (dst == src || n == 0)
		return (dst);
	oct1 = (unsigned char*)dst;
	oct2 = (unsigned char*)src;
	while (n--)
		*oct1++ = *oct2++;
	return (dst);
}
