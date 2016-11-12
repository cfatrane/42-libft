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
	size_t	max;
	size_t	len;

	if (!s)
		return (NULL);
	min = 0;
	while (s[min] != '\0'
			&& (s[min] == ' ' || s[min] == '\n' || s[min] == '\t'))
		min++;
	max = ft_strlen(s);
	while (min < max
			&& (s[max - 1] == ' ' || s[max - 1] == '\n' || s[max - 1] == '\t'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}
