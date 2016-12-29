/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 11:24:12 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/29 18:17:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_itoa_base(unsigned long long int n, char *base)
{
	char				*str;
	unsigned long long	i;

	i = ft_strlen(base);
	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n >= i)
		str = ft_strjoin(ft_itoa_base(n / i, base), ft_itoa_base(n % i, base));
	else if (n < i)
	{
		str[0] = base[n];
		str[1] = '\0';
	}
	return (str);
}
