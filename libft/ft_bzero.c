#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *array;

	array = s;
	while (n-- >= 1)
	{
		*array++ = '\0';
	}
}
