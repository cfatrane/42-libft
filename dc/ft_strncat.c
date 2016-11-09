/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:58:06 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/04 03:01:07 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	dest_len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	dest_len = ft_strlen(s1);
	i = 0;
	while (n > i && s2[i] != '\0')
	{
		s1[i + dest_len] = s2[i];
		i++;
	}
	s1[dest_len + i] = '\0';
	return (s1);
}
