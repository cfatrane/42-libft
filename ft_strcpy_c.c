/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 19:57:01 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/16 19:57:08 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy_c(char *dst, const char *src, char c)
{
	size_t i;

	i = ft_strlen(src);
	while (*src != '\0' && *src != c)
		*dst++ = *src++;
	*dst = '\0';
	return (dst - i);
}
