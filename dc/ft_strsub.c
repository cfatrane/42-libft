/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:52:16 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/07 22:19:06 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strsub(char const *s, unsigned int start, size_t n)
{
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
}
