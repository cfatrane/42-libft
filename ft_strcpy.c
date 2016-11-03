#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	if (src && dst)
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (dst);
	}
	else
		return (NULL);
}