/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:24:04 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:24:07 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*oct1;
	char	*oct2;
	size_t i;

	oct1 = (char *)dest;
	oct2 = (char *)src;
	i = 0;
	if (dest == src || n == 0)
		return (dest);
	while (i < n)
	{
		oct1[i] = oct2[i];
		if (oct1[i] == c)
			return (oct1 + i + 1);
		i++;
	}
	return (NULL);
}