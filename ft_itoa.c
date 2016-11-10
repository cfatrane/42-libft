/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:54:00 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 13:54:03 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = 0;
	while (n /= 10)
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	
}
