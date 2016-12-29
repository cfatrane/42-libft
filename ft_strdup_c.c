/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 19:04:36 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/29 17:43:34 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *s1, char c)
{
	char*s2;

	if (!(s2 = ft_strnew(ft_strlen(s1))))
		return (NULL);
	ft_strcpy_c(s2, s1, c);
	return (s2);
}
