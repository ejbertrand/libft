#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int *s_aux;

	s_aux = s;
	while(n-- >= 1)
	{
		*s_aux++ = c;
	}
	return (s);
}
