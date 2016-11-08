/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:22:01 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 12:22:05 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		k;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	while (big[i] && i < n)
	{
		j = i;
		k = 0;
		while (big[j] == little[k] && j < n)
		{
			j++;
			k++;
			if (little[k] == '\0')
				return ((char*)big + i);
		}
		i++;
	}
	return (NULL);
}
