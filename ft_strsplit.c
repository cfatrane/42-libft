/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:53:45 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 13:53:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{

}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		nb_words;
	int		index;
	int		size;

	index = 0;
	if (!s)
		return (NULL);
	nb_words = ft_count_words((char const *)s, c);
	if ((str = ((char **)malloc(sizeof(*str) * (nb_words + 1)))) == NULL)
		return (NULL);
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		size = ft_want_size((char const *)s, c);
		str[index] = ft_strsub((char const *)s, 0, size);
		if (str[index] == NULL)
			return (NULL);
		s = s + ft_want_size(s, c);
		index++;
	}
	str[index] = NULL;
	return (str);
}