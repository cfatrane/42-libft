/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 04:42:35 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/08 00:36:22 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	s_len;
	size_t	i;
	char	*res;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	res = (char*)malloc(s_len + 1);
	if (NULL == res)
		return (NULL);
	i = 0;
	while ('\0' != s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
