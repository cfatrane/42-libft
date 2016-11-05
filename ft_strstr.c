/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:24:50 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 12:24:53 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	length;
	int p;

	if (*little == '\0')
		return ((char *)big);
	length = ft_strlen(little);
	while (*big)
	{
		p = ft_strncmp(big, little, length);
		if (p == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
/*

	while (i < n && haystack[i])
	{
		j = i;
		k = 0;
		while (haystack[j] == needle[k] && j < n)
		{
			j++;
			k++;
			if (needle[k] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
*/