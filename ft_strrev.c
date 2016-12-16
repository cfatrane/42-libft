/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 10:11:37 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/16 16:25:29 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	unsigned int i;
	char	*ret;
	int		j;

	j = 0;
	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i])
		i++;
	i--;
	while ((size_t)j != ft_strlen(str))
	{
		ret[j] = str[i];
		j++;
		i--;
	}
	ret[j] = '\0';
	return (ret);
}
