#include "libft.h"

static int	ft_ovfmul(size_t a, size_t b)
{
	int	max_factor;

	if (a == 0 || b == 0)
		return (0);
	max_factor = (int) INT_MAX / a;
	if ((int)b > max_factor)
		return (-1);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (ft_ovfmul(nmemb, size))
		return (NULL);
	if (nmemb == 0)
		nmemb = 1;
	if (size == 0)
		size = 1;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
