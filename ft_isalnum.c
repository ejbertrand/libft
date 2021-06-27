#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < 48)
		return (0);
	else if (c > 57 && c < 65)
		return (0);
	else if ((c > 90 && c < 97))
		return (0);
	else if (c > 122)
		return (0);
	return (8);
}
