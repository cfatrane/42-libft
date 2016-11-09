/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 02:11:03 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/11 17:24:23 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s)
{
	char	*str;
	int		cnt;

	cnt = ft_strlen(s);
	if (!s || !(str = (char *)malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	ft_strcpy(str, s);
	return (str);
}
