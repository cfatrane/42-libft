/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 01:43:48 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/10 17:47:43 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *start;

	if ((newlist = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	newlist = f(lst);
	start = newlist;
	while (lst->next)
	{
		if ((newlist->next = (t_list *)malloc(sizeof(t_list))) == NULL)
			return (NULL);
		lst = lst->next;
		newlist->next = f(lst);
		newlist = newlist->next;
	}
	return (start);
}
