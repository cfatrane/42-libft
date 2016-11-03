#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (0);
}


int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		if (*s1 > *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}