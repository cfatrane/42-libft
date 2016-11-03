#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int dest_len;
	unsigned	int i;
	unsigned	int j;

	dest_len = 0;
	i = 0;
	j = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (i < size && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		j++;
	}
	dest[dest_len + i] = '\0';
	while (src[j] != '\0')
		j++;
	return (j + size);
}
