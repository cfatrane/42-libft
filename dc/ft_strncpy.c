/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 02:14:32 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/02 01:09:10 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (src && dst)
	{
		while (src[i] != '\0' && i != n)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < n)
			dst[i++] = '\0';
		return (dst);
	}
	else
		return (NULL);
}
