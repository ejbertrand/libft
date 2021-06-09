#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *aux_src;
	char *aux_dest;

	aux_dest = dest;
	aux_src = (void *)src;
	while (n-- > 0)
	{
		*aux_dest++ = aux_src[n];
	}
	return (dest);
}
