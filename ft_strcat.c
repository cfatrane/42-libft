/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:36:51 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:36:57 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t dest_len;
	size_t i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*
char			*ft_strcat(char *s1, const char *s2)
{
	size_t		dest_len;
	size_t		i;

	if (!s1 || !s2)
		return (NULL);
	dest_len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[i + dest_len] = s2[i];
		i++;
	}
	s1[dest_len + i] = '\0';
	return (s1);
}
*/
