#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	index;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len_s >= start + len)
		substr = (char *)ft_calloc(len + 1, sizeof(char));
	else if (len_s > start)
		substr = (char *)ft_calloc(len_s - start + 1, sizeof(char));
	else
	{
		substr = (char *)ft_calloc(1, sizeof(char));
		if (substr == NULL)
			return (NULL);
		return (substr);
	}
	if (substr == NULL)
		return (NULL);
	index = 0;
	while (s[start] != '\0' && index < len)
		substr[index++] = s[start++];
	return (substr);
}
