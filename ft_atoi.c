#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int nb;
	int sign;

	nb = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\r'
			|| *nptr == '\v' || *nptr == '\f')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = (-1);
		nptr++;
	}
	while (ft_isdigit(int))
	{
		nb = nb * 10 + *nptr - '0';
		nptr+;
	}
	return (sign * nb);
}

int		ft_atoi(const char *str)
{
	int		nb;
	int		sign;

	if (!str)
		return (0);
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nb = 0;
	while (ft_isdigit((int)*str))
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (sign * nb);
}