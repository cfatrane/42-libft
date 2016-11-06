/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:26:14 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/06 16:50:13 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char chr;

	str = (unsigned char*)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*str == chr)
			return (str);
		if (n)
			str++;
	}
	return (NULL);
}
