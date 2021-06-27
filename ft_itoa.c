#include "libft.h"

static	int	isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static	int	num_order(unsigned int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	unsigned int	order;
	unsigned int	negative;
	char			*new_st;
	unsigned int	nbr;

	negative = isnegative(n);
	if (negative)
		nbr = -n;
	else
		nbr = n;
	order = num_order(nbr);
	new_st = (char *)ft_calloc(negative + order + 1, sizeof(char));
	if (!new_st)
		return (NULL);
	if (negative)
		new_st[0] = '-';
	new_st[negative + order] = '\0';
	while (order > 0)
	{
		new_st[negative + order - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		order--;
	}
	return (new_st);
}
