/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwcharlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 17:28:12 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/09 17:30:22 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strwcharlen(wchar_t s)
{
	int j;

	j = 0;
	if ((int)s < 0x80)
		j += 1;
	else if ((int)s < 0x800)
		j += 2;
	else if ((int)s < 0x10000)
		j += 3;
	else
		j += 4;
	return (j);
}
