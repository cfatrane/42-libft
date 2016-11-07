/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:39:04 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:39:10 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t end;

	i = 0;
	while (s1[i] != '\0' && i < n)
		i++;
	end = i;
	while (s2[i - end] && i < n - 1)
	{
		s1[i] = s2[i - end];
		i++;
	}
	if (end < n)
		s1[i] = '\0';
	return (end + ft_strlen(s2));
}
