
#include "libft.h"

size_t	ft_want_size(char const *s, char c)
{
	size_t		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
