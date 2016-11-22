/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:43:37 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/22 10:43:39 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev_itoa(char *str)
{
	int		len;
	int		i;
	char	tmp;

	len = 0;
	i = 0;
	while (str[len])
		++len;
	while (i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	str[len] = '\0';
	return (str);
}
