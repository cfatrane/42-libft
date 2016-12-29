/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 11:24:12 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/28 17:12:03 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_itoa_base(unsigned long long int n, char *base)
{
	char				*s;
	unsigned long long	i;

	i = ft_strlen(base);
	if (!(s = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n >= i)
		s = ft_strjoin(ft_itoa_base(n / i, base), ft_itoa_base(n % i, base));
	else if (n < i)
	{
		s[0] = base[n];
		s[1] = '\0';
	}
	return (s);
}
