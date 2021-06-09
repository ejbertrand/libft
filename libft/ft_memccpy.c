#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *aux_dest;
	char *aux_src;

	aux_dest = dest;
	aux_src = (void *)src;
	while (n-- > 0)
	{
		*aux_dest++ = *aux_src++;
		if ((int)*aux_src == c)
			return ((void *)aux_dest);
	}
	return (NULL);
}
