/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_arrays.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 16:30:56 by dcognata          #+#    #+#             */
/*   Updated: 2016/03/16 15:19:27 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_create_arrays(int x, int y)
{
	void	**array;
	int		i;

	i = 0;
	array = (void **)malloc(sizeof(void *) * y);
	while (i < y)
	{
		array[i] = (void *)malloc(sizeof(void *) * x);
		i++;
	}
	return (array);
}
