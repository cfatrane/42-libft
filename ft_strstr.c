#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	length;
	int p;

	if (!haystack || !needle)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	length = ft_strlen(needle);
	while (*haystack)
	{
		p = ft_strncmp(haystack, needle, length);
		if (p == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
