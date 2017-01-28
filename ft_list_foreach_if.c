/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 19:20:00 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 19:21:17 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *content_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return ;
	if ((*cmp)(begin_list->content, content_ref) == 0)
		f(begin_list->content);
	if (begin_list->next)
		ft_list_foreach_if(begin_list->next, f, content_ref, cmp);
}
