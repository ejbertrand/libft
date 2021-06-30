#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*aux_dest;
	char	*aux_src;

	aux_dest = dest;
	aux_src = (void *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (n-- > 0)
	{
		*aux_dest++ = *aux_src++;
	}
	return (dest);
}
