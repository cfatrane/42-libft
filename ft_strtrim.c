/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:53:23 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/07 13:51:55 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	min;
	size_t	end;
	size_t	len;

	if (!s)
		return (NULL);
	min = 0;
	while (s[min] != '\0'
			&& (s[min] == ' ' || s[min] == '\n' || s[min] == '\t'))
		min++;
	end = ft_strlen(s);
	while (min < end
			&& (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t'))
		end--;
	if (min == end)
		return ("\0");
	len = end - min;
	return (ft_strsub(s, min, len));
}
