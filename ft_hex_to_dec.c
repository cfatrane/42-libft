/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:02:06 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/16 15:31:45 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hex_to_dec(char *hex)
{
	int		dec;
	int		temp;

	dec = 0;
	temp = 0;
	while (*hex != '\0')
	{
		if (ft_islowhexa(*hex))
			temp = *hex - 'a' + 10;
		else if (ft_isupphexa(*hex))
			temp = *hex - 'A' + 10;
		else if (ft_isdigit(*hex))
			temp = *hex - '0';
		dec = dec * 16 + temp;
		hex++;
	}
	return (dec);
}
