/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 17:02:27 by cfatrane          #+#    #+#             */
/*   Updated: 2016/12/26 18:23:15 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(size_t nb, char *base)
{
	if (nb >= ft_strlen(base))
		ft_putnbr_base(nb / ft_strlen(base), base);
	ft_putchar(base[nb % ft_strlen(base)]);
}
