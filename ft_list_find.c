/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 19:23:40 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 19:25:28 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_find(t_list *begin_list, void *content_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return (NULL);
	if ((*cmp)(begin_list->content, content_ref) == 0)
		return (begin_list);
	else if (begin_list->next)
		return (ft_list_find(begin_list->next, content_ref, cmp));
	else
		return (NULL);
}
