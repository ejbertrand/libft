#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;
	char			*trimmed;

	start = 0;
	len = ft_strlen(s1);
	while ((start < len) && ft_strchr(set, s1[start]))
		start++;
	if (start == len)
	{
		trimmed = ft_calloc(1, sizeof(char));
		if (!trimmed)
			return (NULL);
		else
			return (trimmed);
	}
	while (len > 0 && ft_strchr(set, s1[len]))
		len--;
	trimmed = ft_substr(s1, start, len - start + 1);
	if (!trimmed)
		return ("");
	else
		return (trimmed);
}
