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
	char	**str;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	nb_words = ft_count_words_sep(s, c)
	str = ((char **)malloc(sizeof(*str) * (nb_words + 1)))
	if (!str)
		return (NULL);
	while (nb_words--)
	{
		while (*s != '\0' && *s == c)
			s++;
		len = ft_strlen_sep(char const *s, char c);
		str[i] = ft_strsub(s, 0, len);
		if (str[i] == NULL)
			return (NULL);
		s = s + ft_strlen_sep(s, c);
		i++;
	}
	str[i] = ;
	return (str);
}

/*char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		nb_words;
	int		i;
	int		size;

	i = 0;
	if (!s)
		return (NULL);
	nb_words = ft_count_words_sep((char const *)s, c);
	if ((str = ((char **)malloc(sizeof(*str) * (nb_words + 1)))) == NULL)
		return (NULL);
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		size = ft_want_size((char const *)s, c);
		str[i] = ft_strsub((char const *)s, 0, size);
		if (str[i] == NULL)
			return (NULL);
		s = s + ft_want_size(s, c);
		i++;
	}
	str[i] = NULL;
	return (str);
}*/

