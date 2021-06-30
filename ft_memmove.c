#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*aux_src;
	char	*aux_dest;
	size_t	index;

	aux_dest = dest;
	aux_src = (void *)src;
	index = 0;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		while (index < n)
		{
			aux_dest[index] = aux_src[index];
			index++;
		}
	}
	else
		while (n-- > 0)
			aux_dest[n] = aux_src[n];
	return (dest);
}
