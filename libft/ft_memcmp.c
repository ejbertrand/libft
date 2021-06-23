#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *aux_s1;
	unsigned char *aux_s2;

	aux_s1 = (unsigned char*)s1;
	aux_s2 = (unsigned char*)s2;
	while (n-- > 0)
	{
		if (*aux_s1 != *aux_s2)
			return ((int)*aux_s1 - *aux_s2);
		aux_s1++;
		aux_s2++;
	}
	return (0);
}