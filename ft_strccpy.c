/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 19:05:52 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/30 10:04:47 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *dst, const char *src, char c)
{
	size_t i;

	i = ft_strlen(src);
	while (*src != '\0' && *src != c)
		*dst++ = *src++;
	*dst = '\0';
	return (dst - i);
}
