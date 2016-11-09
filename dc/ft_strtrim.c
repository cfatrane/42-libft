/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:55:23 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/08 00:50:47 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (s == NULL)
		return (NULL);
	start = 0;
	while ('\0' != s[start]
			&& (' ' == s[start] || '\n' == s[start] || '\t' == s[start]))
	{
		start++;
	}
	end = ft_strlen(s);
	while (start < end
			&& (' ' == s[end - 1] || '\n' == s[end - 1] || '\t' == s[end - 1]))
	{
		end--;
	}
	if (end == start)
		return (ft_strdup(""));
	len = end - start;
	return (ft_strsub(s, start, len));
}
