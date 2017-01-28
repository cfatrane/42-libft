/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 18:16:41 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 18:30:23 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void *content)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			ft_list_push_back(&(*begin_list)->next, content);
		else
			(*begin_list)->next = ft_create_elem(content);
	}
	else
		*begin_list = ft_create_elem(content);
}
