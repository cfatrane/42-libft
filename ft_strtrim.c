/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:53:23 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 13:53:25 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] != '\0' && (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
		start++;
	end = ft_strlen(s);
	while (start < end && (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t'))
		end--;
	if (start == end)
		return (ft_strdup(""));
	len = end - start;
	return (ft_strsub(s, start,len));
}
