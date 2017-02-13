/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismultiple.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 16:57:37 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 20:22:56 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ismultiple(int nb, int mlt)
{
	long long int	nbr;
	int				ret;

	nbr = nb;
	ret = nbr % mlt;
	return (ret == 0 ? 1 : -1);
}
