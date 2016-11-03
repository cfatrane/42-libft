#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len;
	size_t i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}


char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	dest_len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	dest_len = ft_strlen(s1);
	i = 0;
	while (n > i && s2[i] != '\0')
	{
		s1[i + dest_len] = s2[i];
		i++;
	}
	s1[dest_len + i] = '\0';
	return (s1);
}