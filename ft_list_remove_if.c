/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 18:46:40 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/31 19:02:45 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_remove_if(t_list **begin_list, void *content_ref, int (*cmp)())
{
	t_list	*to_free;

	if (*begin_list)
	{
		if (cmp((*begin_list)->content, content_ref) == 0)
		{
			to_free = *begin_list;
			*begin_list = (*begin_list)->next;
			free(to_free);
			ft_list_remove_if(begin_list, content_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, content_ref, cmp);
	}
}
