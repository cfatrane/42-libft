/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:43:22 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:44:59 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == cara)
			return ((char *)s + i);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}


char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cara;
	int				i;

	cara = (unsigned char)c;
	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == cara)
			return ((char *)s + i);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
