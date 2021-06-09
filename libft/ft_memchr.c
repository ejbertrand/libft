#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *aux_s;

	aux_s = (char *)s;
	while(n-- > 0)
	{
		if((int)*aux_s++ == c)
			return (aux_s);
	}
	return (NULL);
}