/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcognata <dcognata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:55:53 by dcognata          #+#    #+#             */
/*   Updated: 2015/12/07 22:20:03 by dcognata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_words;
	int		index;
	int		size;

	index = 0;
	if (!s)
		return (NULL);
	nb_words = ft_count_words((char const *)s, c);
	if ((t = ((char **)malloc(sizeof(*t) * (nb_words + 1)))) == NULL)
		return (NULL);
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		size = ft_want_size((char const *)s, c);
		t[index] = ft_strsub((char const *)s, 0, size);
		if (t[index] == NULL)
			return (NULL);
		s = s + ft_want_size(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}
