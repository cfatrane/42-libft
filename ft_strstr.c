#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*haystack)
	{
		while (haystack[i + j] == needle[j]);
		{
			if (needle[j + 1] == '\0')
			{
				return (hastack + 1); // Pas sur
			}
			j++;
		}
		haystack++;
	}
	return (NULL);
}


char	*ft_strstr(const char *s1, const char *s2)
{
	int	length;
	int p;

	if (!s1 || !s2)
		return (NULL);
	if (*s2 == '\0')
		return ((char *)s1);
	length = ft_strlen(s2);
	while (*s1)
	{
		p = ft_strncmp(s1, s2, length);
		if (p == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && to_find[j] && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (!to_find[j])
			return (str + i - j);
		i++;
	}
	return (0);
}