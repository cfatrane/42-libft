/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:42:09 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/22 10:42:12 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			str[i] = f(s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
