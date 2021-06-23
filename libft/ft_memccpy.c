#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *aux_dest;
	char *aux_src;

	aux_dest = (char *) dest;
	aux_src = (char *)src;
	while (n-- > 0)
	{
		*aux_dest = *aux_src;
		if (*aux_dest++ == (char)c)
			return ((void *)aux_dest);
		aux_src++;
	}
	return (NULL);
}
