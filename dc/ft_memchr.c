/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 23:48:14 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/01 22:54:44 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cur;

	str = (unsigned char *)s;
	cur = (unsigned char)c;
	while (n--)
	{
		if (*str == cur)
			return (str);
		if (n)
			str++;
	}
	return (NULL);
}
