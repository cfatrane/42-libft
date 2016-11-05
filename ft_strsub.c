/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:52:22 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 13:52:24 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(*str) * (len + 1))
	if (!str)
		return (NULL);
	while (s[start] != '\0' && j < len)
	{
		str[i] = s[start];
		start++;
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

/*{
	char		*str;
	size_t		i;
	size_t		t;

	i = 0;
	t = 0;
	if (!s)
		return (NULL);
	if ((str = (char *)malloc(sizeof(*str) * (n + 1))) == NULL)
		return (NULL);
	while (s[start] != '\0' && n > t)
	{
		str[i] = s[start];
		start++;
		i++;
		n--;
	}
	str[i] = '\0';
	return (str);
}*/