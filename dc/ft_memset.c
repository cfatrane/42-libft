/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 02:18:41 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/08 00:00:23 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*s_copy;
	char	c_copy;

	s_copy = (char*)s;
	c_copy = (char)c;
	i = 0;
	while (i < n)
	{
		s_copy[i] = c_copy;
		i++;
	}
	return (s);
}
