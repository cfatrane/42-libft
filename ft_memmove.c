/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:37:54 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/22 10:37:57 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *tmp;

	tmp = ft_strnew(n);
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, n);
		dst = ft_memcpy(dst, tmp, n);
	}
	free(tmp);
	return (dst);
}
