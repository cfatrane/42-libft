/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 19:36:30 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 19:36:32 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_sort(t_list* lst, int (*cmp)())
{
	void	*tempo;
	t_list	*parcour;

	parcour = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->content, lst->next->content)) == 0)
		{
			tempo = lst->content;
			lst->content = lst->next->content;
			lst->next->content = tempo;
			lst = parcour;
		}
		else
			lst = lst->next;
	}
	lst = parcour;
	return (lst);
}

