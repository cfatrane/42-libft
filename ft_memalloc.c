/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:46:47 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 13:46:49 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)malloc(sizeof(unsigned char) * (size));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
