/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:02:06 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/16 15:29:21 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hex_to_dec(char *hex)
{
	int		dec;
	int		temp;
	int		ismin;
	int		ismaj;
	int		isdigit;

	dec = 0;
	temp = 0;
	while (*hex != '\0')
	{
		ismin = ft_islowhexa(*hex);
		ismaj = ft_isupphexa(*hex);
		isdigit = ft_isdigit(*hex);
		if (ismin)
			temp = *hex - 'a' + 10;
		else if (ismaj)
			temp = *hex - 'A' + 10;
		else if (isdigit)
			temp = *hex - '0';
		dec = dec * 16 + temp;
		hex++;
	}
	return (dec);
}
