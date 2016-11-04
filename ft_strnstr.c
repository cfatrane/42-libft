/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:22:01 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 12:22:05 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		k;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
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
	return (NULL);
}
