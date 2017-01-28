/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 19:37:32 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 19:44:36 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list;
	t_list	*last;
	t_list	*tmp;

	list = begin_list;
	last = NULL;
	if (!(list))
		list = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = last;
		last = list;
		list = tmp;
	}
	begin_list = last;
}
