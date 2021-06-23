#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t index;

	index = 0;
	while(n-- > 0)
	{
		if (((unsigned char *)s)[index] == (unsigned char) c)
			return (void *)s + index;
		index++;
	}
	return (NULL);
}