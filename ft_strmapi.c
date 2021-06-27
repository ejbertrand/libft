#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapped;
	size_t			s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	mapped = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (!mapped)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapped[i] = (*f)(i, s[i]);
		i++;
	}
	return (mapped);
}
