#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*s_aux;

	s_aux = s;
	while (n-- > 0)
		*s_aux++ = (char)c;
	return (s);
}
