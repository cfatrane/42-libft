/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 18:44:47 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 18:51:33 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	list = NULL;
	i = 1;
	if (ac)
		while (i < ac)
		{
			ft_list_push_front(&list, av[i]);
			i++;
		}
	return (list);
}
