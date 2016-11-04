/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:31:14 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:34:47 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (dest && src)
	{
		while (i < n && src[i] != '\0')
		{
			dest[i] = src [i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}
