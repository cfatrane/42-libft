/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words_sep.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:32:37 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/22 10:32:40 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words_sep(char const *s, char c)
{
	int	count;
	int	sep;

	sep = 0;
	count = 0;
	while (*s != '\0')
	{
		if (sep == 1 && *s == c)
			sep = 0;
		if (sep == 0 && *s != c)
		{
			sep = 1;
			count++;
		}
		s++;
	}
	return (count);
}
