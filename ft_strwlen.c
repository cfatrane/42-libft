/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 16:16:21 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/10 11:32:32 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strwlen(const wchar_t *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((int)s[i] < 0x7F)
			j += 1;
		else if ((int)s[i] < 0x7FF)
			j += 2;
		else if ((int)s[i] < 0xFFFF)
			j += 3;
		else if ((int)s[i] < 0x10FFFF)
			j += 4;
		i++;
	}
	return (j);
}
