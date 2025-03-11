#include <limits.h>

static long	calc_next_b(long *b, int sign, char c);

int	ft_atoi(const char *nptr)
{
	long	b;
	long	i;
	long	sign;

	b = 0;
	i = 0;
	sign = 1;
	while (('\t' <= nptr[i] && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			sign = -1;
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		if (calc_next_b(&b, sign, nptr[i]) == 1)
			return ((int) b);
		i++;
	}
	return ((int) b);
}

static long	calc_next_b(long *b, int sign, char c)
{
	long	b_prev;

	b_prev = *b;
	if (sign == -1)
	{
		*b = *b * 10 - (c - '0');
		if (*b > b_prev)
		{
			*b = LONG_MIN;
			return (1);
		}
	}
	else
	{
		*b = *b * 10 + (c - '0');
		if (*b < b_prev)
		{
			*b = LONG_MAX;
			return (1);
		}
	}
	return (0);
}
