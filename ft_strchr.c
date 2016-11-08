/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:40:13 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/05 10:44:59 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	size_t	i;

	chr = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return ((char*)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char*)s + i);
	return (NULL);
}
